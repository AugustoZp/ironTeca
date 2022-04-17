#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#define YELLOW  "\x1b[33m"
#define WHITE   "\x1B[37m"
#define TRUE 1
#define FALSE 0
#define USER "root"  //USUARIO PARA INICIAR SESIÓN EN MODO ADMIN//
#define PASS "00346520"  //CONTRASEÑA PARA INICIAR SESIÓN EN MODO ADMIN//
using namespace std;



          //COMPONENTES DE AGREGAR LIBRO//
string nombrelib;
string nombreaut;
string yea;
string nombreedit;
string simp;
string scp;



          //COMPONENTES DE REGISTRO DE ALUMNO//
string nombrealm;
string nombrecarr;
string matri;


          //INICIO DE TITULARES NO TOCAR//
void INICIO(string title)

{
    int i;
    int val;
        val = title.length();
        val = val + 73;

    for(i=0; i<= val; i++)
    {
        cout << YELLOW << "*";
    }

    cout << "\n \n";

    for (i=0; i<= val; i++)
    {
        cout << " ";
        if (i==20 )
        {
            cout<< WHITE << title;
        }
        cout << " ";
    }
    cout << "\n";

    for (i=0; i<= val; i++)
    {
        cout << YELLOW << "*";
    }
    cout << "\n \n \n";

    cout << WHITE;
}
          //TITULARES TERMINA//


          //INDICE//
void menu_inicio();
void menu_principal();
    void menu_libros();
          void recomendaciones();
          void titulo_libros();
          void libro_1();
          void libro_2();
          void libro_3();
          void libro_4();
          void libro_5();
          void libro_AGREGADO();
          void nodisp();
          void nombre_autor();
          void nombre_editorial();
               void registrar_usuario();
    void registro_prestamos();
    void reportar_libro();


void iniciar_como_admin();
    void menu_admin();
         void agregar();
         void eliminar(); //Falta - Antonio




int main()
{

    menu_inicio();

    return 0;
}







          //MENU INICIO INICIA//
void menu_inicio()
{
        int opcion;
        bool repetir = true;

        do
        {
            system("cls");
        INICIO("SISTEMA BIBLIOTECARIO IRONTECA");
        cout << "\t¡Bienvenido! por favor, selecciona la opción deseada."<<endl;
        cout << "\n \n";

        cout << "\t1) Ir al menú principal -->"<<endl;
        cout << "\n";
        cout << "\t2) Iniciar como administrador -->"<<endl;
        cout << "\n";
        cout << "\t0) salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

          switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 2:
            iniciar_como_admin();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
        } while(repetir);
}
          //MENU INICIO TERMINA//


          //MENU PRINCIPAL INICIA//
void menu_principal()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("MENÚ PRINCIPAL");
        cout << "\t!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
        cout << "\n \n";
        cout << "\t1) Ver libros -->"<<endl;
        cout << "\n";
        cout << "\t2) Ver préstamos recientes -->"<<endl;
        cout << "\n";
        cout << "\t3) Reporta un libro -->"<<endl;
        cout << "\n";
        cout << "\t9) <-- Volver al menú de inicio"<<endl;
        cout << "\n";
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_libros();
            break;

          case 2:
              registro_prestamos();
            break;

          case 3:
              reportar_libro();
            break;

          case 9:
              menu_inicio();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //MENU PRINCIPAL TERMINA//


          //MENU LIBROS INICIA//
void menu_libros()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("LIBROS");
        cout << "\tPor favor, selecciona la categoría deseada."<<endl;
        cout << "\n \n";
        cout << "\t1) Recomendaciones -->"<<endl;
        cout << "\n";
        cout << "\t2) Ver todos los títulos -->"<<endl;
        cout << "\n";
        cout << "\t3) Ver autores afiliados -->"<<endl;
        cout << "\n";
        cout << "\t4) Ver editoriales afiliadas -->"<<endl;
        cout << "\n";
        cout << "\t0) <-- Volver al menú principal"<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              recomendaciones();
            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              nombre_autor();
            break;

          case 4:
              nombre_editorial();
            break;

          case 0:
            menu_principal();
          }
    } while(repetir);
}
          //MENU LIBROS TERMINA//


          //REGISTRO PRESTAMOS INICIA//
void registro_prestamos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("REGISTRO DE PRÉSTAMOS RECIENTES");

        ifstream archivo2("REGALM.txt");
        ifstream archivo("LIBDISP.txt");
        getline(archivo2,nombrealm);
        cout << "\tNombre completo: "<<nombrealm<<endl;
        cout << "\n";
        getline(archivo2,matri);
        cout << "\tMatrícula escolar: "<<matri<<endl;
        cout << "\n";
        getline(archivo2,nombrecarr);
        cout << "\tCarrera: "<<nombrecarr<<endl;
        cout << "\n";
        getline(archivo,nombrelib);
        cout << "\tTítulo del libro: "<<nombrelib<<endl;
        cout << "\n\n\n\n\n";


        cout << "\t1) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n\n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //REGISTRO PRESTAMOS TERMINA//

        //RECOMENDACIONES INICIO//
void recomendaciones()
{
    int op;
    int op_1;
    int resp1;
    int resp2;
    int resp3;
    int resp4;
    int resp5;
    srand(time(NULL));

    do{

        system("cls");
        INICIO("RECOMENDACIONES");

        cout <<"\t¡Bienvenido a la sección de recomendaciones!"<<endl;
        cout <<"\tAquí te recomendaremos un libro de nuestro sistema."<<endl;
         cout <<"\n"<<endl;
        cout <<"\tEl sistema lanzará un número aleatorio entre 0 y 5, y ese será el libro que le correspondrá"<<endl;
        cout <<"\n\t¿Está listo/a?"<<endl;

        cout <<"\n\n\n"<<endl;
        cout <<"\t"; system("pause");

        op = rand() % (5+1);
        cout <<"\n\n\n"<< endl;
        cout <<"\tEl sistema indica esta opción: -->  "<< op<<"  <--"<<endl;
        cout <<"\n"<< endl;

        cout <<"\t1) Opción 1\n"<<endl;
        cout <<"\t2) Opción 2\n"<<endl;
        cout <<"\t3) Opción 3\n"<<endl;
        cout <<"\t4) Opción 4\n"<<endl;
        cout <<"\t5) Opción 5\n"<<endl;
        cout <<"\t0) <-- Volver al menú de libros\n"<<endl;
        cout <<"\tIngrese la opción que brindó el sistema: "; cin>>op_1;

        cout<<"\n\n"<<endl;

        do {
            switch (op_1){
                case 1:
                    cout<<"\tHa seleccionado la opción 1\n"<<endl;
                    cout<<"\t¿Desea visualizar este libro?\n"<<endl;
                    cout<<"\t1) Sí"<<endl;
                    cout<<"\t2) Probar otra recomendación"<<endl;
                    cout<<"\t3) <-- Volver al menú de libros\n"<<endl;
                    cout<<"\t";
                    cin>>resp1;

                    if (resp1 == 3){
                        menu_libros();
                    }
                    else if (resp1 == 2 ){
                            recomendaciones();
                        }
                        else {
                            libro_1();
                        }
                break;

                case 2:
                    cout<<"\tHas seleccionado la opción 2\n"<<endl;
                    cout<<"\t¿Desea visualizar este libro?\n"<<endl;
                    cout<<"\t1) Sí"<<endl;
                    cout<<"\t2) Probar otra recomendación"<<endl;
                    cout<<"\t3) <-- Volver al menú de libros\n"<<endl;
                    cout<<"\t";
                    cin>>resp2;

                    if (resp2 == 3){
                        menu_libros();
                    }
                    else if (resp2 == 2 ){
                            recomendaciones();
                        }
                        else {
                            libro_2();
                        }
                break;

                case 3:
                    cout<<"\tHas seleccionado  la opción 3\n"<<endl;
                    cout<<"\t¿Desea visualizar este libro?\n"<<endl;
                    cout<<"\t1) Sí"<<endl;
                    cout<<"\t2) Probar otra recomendación"<<endl;
                    cout<<"\t3) <-- Volver al menú de libros\n"<<endl;
                    cout<<"\t";
                    cin>>resp3;

                    if (resp3 == 3){
                        menu_libros();
                    }
                    else if (resp3 == 2 ){
                            recomendaciones();
                        }
                        else {
                            libro_3();
                        }
                break;

                case 4:
                    cout<<"\tHas seleccionado  la opción 4\n"<<endl;
                    cout<<"\t¿Desea visualizar este libro?\n"<<endl;
                    cout<<"\t1) Sí"<<endl;
                    cout<<"\t2) Probar otra recomendación"<<endl;
                    cout<<"\t3) <-- Volver al menú de libros\n"<<endl;
                    cout<<"\t";
                    cin>>resp4;

                    if (resp4 == 3){
                        menu_libros();
                    }
                    else if (resp4 == 2 ){
                            recomendaciones();
                        }
                        else {
                            libro_4();
                        }
                break;

                case 5:
                    cout<<"\tHas seleccionado  la opción 4\n"<<endl;
                    cout<<"\t¿Desea visualizar este libro?\n"<<endl;
                    cout<<"\t1) Sí"<<endl;
                    cout<<"\t2) Probar otra recomendación"<<endl;
                    cout<<"\t3) <-- Volver al menú de libros\n"<<endl;
                    cout<<"\t";
                    cin>>resp5;

                    if (resp5 == 3){
                        menu_libros();
                    }
                    else if (resp5 == 2 ){
                            recomendaciones();
                        }
                        else {
                            libro_5();
                        }
                break;

                case 0:
                    menu_libros();
                break;
            }
        }while (op < 1 || op > 3);
    }while (op = 0);

}
        //RECOEMNDACIONES TERMINA//

          //LIBROS Y SUS TITULOS//
void titulo_libros()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("TITULOS");


        cout << "\tContamos con los siguientes titulos:"<<endl;
        cout << "\n";
        cout << "\t1) LOS RETOS DEL DESTINO -->"<<endl;
        cout << "\n";
        cout << "\t2) EL HACEDOR DE HOMBRES -->"<<endl;
        cout << "\n";
        cout << "\t3) MISTERIOS GOZOSOS -->"<<endl;
        cout << "\n";
        cout << "\t4) IRREAL -->"<<endl;
        cout << "\n";
        cout << "\t5) EL ORFANATO DE HESKINN -->"<<endl;
        cout << "\n";
        ifstream archivo("LIBDISP.txt");
        getline(archivo,nombrelib);
        cout<<"\t6) "<<nombrelib<<" -->"<<endl;
        archivo.close();
        cout << "\n\n\n\n\n";


        cout << "\t8) <-- Volver al menú de libros"<<endl;
        cout << "\t9) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              libro_1();
            break;

          case 2:
              libro_2();
            break;

          case 3:
              libro_3();
            break;

          case 4:
              libro_4();
            break;

          case 5:
              libro_5();
            break;

          case 6:
              libro_AGREGADO();
            break;

          case 9:
              menu_principal();
            break;

          case 8:
              menu_libros();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN  DE LIBROS Y SUS TITULOS//


          //INICIO DE DESCRIPCION DE CADA LIBRO//
          //LIBRO 1//
void libro_1()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("LOS RETOS DEL DESTINO");


        cout << "\tTitulo: LOS RETOS DEL DESTINO"<<endl;
        cout << "\n";
        cout << "\tSinopsis: En la mañana de un once de agosto, un joven cantautor abandona Barcelona en España y se dirige a Lieja en Bélgica; acababa de cumplir veinticuatro años. En ese preciso momento, en la otra punta del mundo, una mujer entra en la maternidad, está a punto de dar a luz. Al atardecer del día siguiente, doce de agosto, el artista desembarca en la estación de los Guillemines en Lieja. Al instante, allá en la distancia, al otro lado del océano, una mujer alumbra a una hermosa niña. Dieciocho años más tarde, después de que el cantautor recorrió medio mundo con la música a cuestas, visita una isla caribeña donde encuentra a aquella niña ya con dieciocho años de edad que vive con su hermana mayor y su hermano pequeño. Las circunstancias, la casualidad o tal vez el destino hacen que se encuentren, que se enamoren perdidamente y decidan unirse en matrimonio hasta que la muerte los separe."<<endl;
        cout << "\n";
        cout << "\tAño de publicación: 2022"<<endl;
        cout << "\n";
        cout << "\tAutor: José Navarro Ballesteros"<<endl;
        cout << "\n";
        cout << "\tEditorial: akal"<<endl;
        cout << "\n";
        cout << "\tDisponibilidad:Si"<<endl;
        cout << "\n";
        cout << "\t¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "\t1) Solicitar préstamo -->"<<endl;
        cout << "\t2) <-- Volver al menú de títulos"<<endl;
        cout << "\t3) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              registrar_usuario();

            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO 1//

          //LIBRO 2//
void libro_2()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("EL HACEDOR DE HOMBRES");


        cout << "\tTitulo: EL HACEDOR DE HOMBRES"<<endl;
        cout << "\n";
        cout << "\tSinopsis: Las decisiones del ser creado escapan a los designios del creador. Un relato que penetra en lo más profundo de la creatividad artística. Un juego de espejos que envuelve en misterio toda la narración. Carlos de Tomás. Navalmoral de la Mata (Cáceres) 1960. Novelista, poeta y biógrafo. Entre una extensa obra, es autor de las novelas: Paisajes de Ceniza, El cuaderno veintiuno, Café Bramante, La confesión del Libio, La vida de Frank, Las Chimeneas de Moscú, Vidas en el margen, Zapatos en la estrada, o su novela memorialística: Las mujeres del César, Amarante 2020. En palabras del autor: El hacedor de hombres es una obra intensa, entretenida y misteriosa. Llena de referencias subliminales a la literatura universal que el lector puede ir descubriendo a lo largo de su lectura. Una alegoría a la construcción de cualquier obra artística, principalmente a la razón última de la creación en la literatura."<<endl;
        cout << "\n";
        cout << "\tAño de publicación: 2022"<<endl;
        cout << "\n";
        cout << "\tAutor: Carlos de Tomás"<<endl;
        cout << "\n";
        cout << "\tEditorial: Anagrama"<<endl;
        cout << "\n";
        cout << "\tDisponibilidad:Si"<<endl;
        cout << "\n";
        cout << "\t¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "\t1) Solicitar préstamo -->"<<endl;
        cout << "\t2) <-- Volver al menú de títulos"<<endl;
        cout << "\t3) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              registrar_usuario();

            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO 2//

          //LIBRO 3//
void libro_3()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("MISTERIOS GOZOSOS");


        cout << "\tTitulo: MISTERIOS GOZOSOS"<<endl;
        cout << "\n";
        cout << "\tSinopsis: parte de un hecho autobiográfico, la muerte de las dos personas de referencia en la vida de la protagonista y el intento de reconstruir su vida aislándose en Gozo (Malta). A partir de ahí y mientras intenta resolver en solitario su crisis como mujer y como madre, va descubriendo dos tipos de personas que definen la sociedad actual: quienes se aferran a sus creencias hasta el fanatismo y quienes, carentes de ellas, buscan desesperadamente certezas en teorías supersticiosas, exóticas, conspiranoicas o, sencillamente, desquiciadas. Pero, por debajo de esos seres a la deriva está la realidad descarnada de quienes sólo buscan la supervivencia: los inmigrantes cuyos cadáveres alfombran el Mediterráneo y que se han convertido en el enemigo a batir para un creciente número de europeos que los ven como un peligro para su identidad y bienestar. El mundo de las sectas y la extrema derecha convergen en ese punto para provocar un inesperado final."<<endl;
        cout << "\n";
        cout << "\tAño de publicación: 2022"<<endl;
        cout << "\n";
        cout << "\tAutor: Esther Bajo"<<endl;
        cout << "\n";
        cout << "\tEditorial: Alfaguara"<<endl;
        cout << "\n";
        cout << "\tDisponibilidad:Si"<<endl;
        cout << "\n";
        cout << "\t¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "\t1) Solicitar préstamo -->"<<endl;
        cout << "\t2) <-- Volver al menú de títulos"<<endl;
        cout << "\t3) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              registrar_usuario();

            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO 3//

          //LIBRO 4//
void libro_4()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("IRREAL");


        cout << "\tTitulo: IRREAL"<<endl;
        cout << "\n";
        cout << "\tSinopsis: No me acuerdo del momento concreto, ni de que lo motivó, pero lo cierto es que de chaval, un día me vi con un lápiz en la mano y desde entonces ya no lo he soltado. Con aquella arma en mi poder, declaré la guerra a cuanto tebeo caía en mis manos, copiando una y otra vez los personajes que vivían en aquel mundo enmarcado en viñetas. Una cosa llevó a la otra y cuando quise darme cuenta me encontré con mis piernas invadidas por un pelaje adolescente y trabajando en una agencia de publicidad. Con las tres comidas diarias aseguradas, mi lápiz y yo seguimos camino. Unos trazos fueron dando paso a otros, y se produjo una curiosa metamorfosis: se transformaron en letras que, apareándose entre sí, alumbraron una serie de relatos. Los recién nacidos pronto crecieron y como buenos hermanos decidieron unirse formando una pandilla única. Irreal, la bauticé. Desde entonces, no pasa un día (con la preocupación natural que siente un padre por sus hijos), en que no imagine cómo serán de mayores…  Resumiendo con el menor número de palabras posibles: Lo que aquí se relata se basa en hechos totalmente irreales por lo que la veracidad de los mismos queda sujeta al libre albedrío de quienes los lean."<<endl;
        cout << "\n";
        cout << "\tAño de publicación: 2022"<<endl;
        cout << "\n";
        cout << "\tAutor: Juan Carlos Cámara"<<endl;
        cout << "\n";
        cout << "\tEditorial: Alianza"<<endl;
        cout << "\n";
        cout << "\tDisponibilidad:No"<<endl;
        cout << "\n";
        cout << "\t¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "\t1) Solicitar préstamo -->"<<endl;
        cout << "\t2) <-- Volver al menú de títulos"<<endl;
        cout << "\t3) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              registrar_usuario();

            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO 4//

          //LIBRO 5//
void libro_5()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("EL ORFANATO DE HESKINN");


        cout << "\tTitulo: EL ORFANATO DE HESKINN"<<endl;
        cout << "\n";
        cout << "\tSinopsis: El joven sueco Isak Berg, se ve obligado a ingresar en el Orfanato Heskinn tras la dolorosa pérdida de sus padres a manos de dos individuos. Solitario, tras los valles de la isla sueca de Gotland (Visby), se encuentra el peculiar edificio, construido en el siglo XVIII por altos nobles de la isla. Cuando llega al deteriorado y escalofriante lugar, comienzan a suceder hechos macabros que parecen tener una conexión entre ellos. Descubrirá secretos del pasado de los trabajadores y compañeros que parecen querer esconder algo más de lo que muestran. Pero su inseguridad aumentará cuando conozca la leyenda de un chico llamado Börje Persson, que pareció haber asesinado a dos menores en algún momento de su vida, y la extraña presencia de notas en el lavabo, escritas a mano incoherentemente. ¿Hasta dónde estarías dispuesto a llegar para sobrevivir?"<<endl;
        cout << "\n";
        cout << "\tAño de publicación: 2013"<<endl;
        cout << "\n";
        cout << "\tAutor: Javier Berzosa"<<endl;
        cout << "\n";
        cout << "\tEditorial: Astiberri"<<endl;
        cout << "\n";
        cout << "\tDisponibilidad:No"<<endl;
        cout << "\n";
        cout << "\t¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "\t1) Solicitar préstamo -->"<<endl;
        cout << "\t2) <-- Volver al menú de títulos"<<endl;
        cout << "\t3) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              registrar_usuario();

            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO 5//

          //LIBRO AGREGADO//
void libro_AGREGADO()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO(nombrelib);

        ifstream archivo("LIBDISP.txt");
        if(archivo.fail())
        {
        cout<<"\t\t\tESTE LIBRO HA SIDO ELIMINADO DEL REGISTRO.";
        cout<<"\n\n\t";system("pause");
        do{
            titulo_libros();
          }while(repetir);
        }
        cout << "\n";
        getline(archivo,nombrelib);
        cout << "\tTitulo: "<<nombrelib<<endl;
        cout << "\n";
        getline(archivo,nombreaut);
        cout << "\tAutor: "<<nombreaut<<endl;
        cout << "\n";
        getline(archivo,yea);
        cout << "\tAño de publicación: "<<yea<<endl;
        cout << "\n";
        getline(archivo,nombreedit);
        cout << "\tEditorial: "<<nombreedit<<endl;
        cout << "\n";
        getline(archivo,simp);
        cout << "\tSinopsis: "<<simp<<endl;
        cout << "\n";
        cout << "\tDisponibilidad: "<<scp<<endl;
        cout << "\n\n";
        cout << "\t¿Que acción desea realizar?:"<<endl;
        cout << "\n";

        archivo.close();
        cout << "\t1) Solicitar préstamo -->"<<endl;
        cout << "\t2) <-- Volver al menú de títulos"<<endl;
        cout << "\t3) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              registrar_usuario();

            break;

          case 2:
              titulo_libros();
            break;

          case 3:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO AGREGADO//


          //LIBROS NO DISPONIBLES INICIA//
void nodisp()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("\tUPS...");
        cout << "\tEl libro no se encuentra disponible por el momento"<<endl;
        cout << "\n";

        cout << "\t¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "\t2) <-- Volver al menú de libros"<<endl;
        cout << "\t1) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir"<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 2:
              menu_libros();
            break;

          case 0:
            exit(0);
          }
    } while(repetir);
}

          //LIBROS NO DISPONIBLES TERMINA//

          //NOMBRE DE AUTORES INICIA//
void nombre_autor()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("AUTORES");


        cout << "\tColaboramos con los siguientes autores:"<<endl;
        cout << "\n";
        cout << "\t--> José Navarro Ballesteros"<<endl;
        cout << "\n";
        cout << "\t--> Carlos de Tomás"<<endl;
        cout << "\n";
        cout << "\t--> Esther Bajo"<<endl;
        cout << "\n";
        cout << "\t--> Juan Carlos Cámara"<<endl;
        cout << "\n";
        cout << "\t--> Javier Berzosa"<<endl;
        cout << "\n\n\n\n\n";


        cout << "\t2) <-- Volver al menú de libros"<<endl;
        cout << "\t1) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 2:
              menu_libros();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //NOMBRE DE AUTORES TERMINA//


          //NOMBRE DE EDITORIALES INICIA//
void nombre_editorial()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("EDITORIALES");


        cout << "\tTrabajamos con las siguientes editoriales:"<<endl;
        cout << "\n";
        cout << "\t--> Akal"<<endl;
        cout << "\n";
        cout << "\t--> Anagrama"<<endl;
        cout << "\n";
        cout << "\t--> Alfaguara"<<endl;
        cout << "\n";
        cout << "\t--> Alianza"<<endl;
        cout << "\n";
        cout << "\t--> Astiberri"<<endl;
        cout << "\n\n\n\n\n";

        cout << "\t2) <-- Volver al menú  de libros"<<endl;
        cout << "\t1) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 2:
              menu_libros();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //NOMBRE DE EDITORIALES TERMINA//


          //REGISTRAR USUARIO INICIA//
void registrar_usuario()
{
    ofstream archivo2;

    archivo2.open("REGALM.txt",ios::out);

        if(archivo2.fail()){
        cout<<"Ha ocurrido un error, por favor inténtelo más tarde";
        exit(1);
                          }
    int opcion;
    int folio;
    folio = 100 + rand();
    bool repetir = true;

    do
    {

    system("cls");
        INICIO("REGISTRAR USUARIO");

    cout << "\tPor favor introduce los datos solicitados​:";
    cout << "\n \n";

     cout << "\tNombre completo:\n\t";
     fflush(stdin);
     getline(cin,nombrealm);
     archivo2<<nombrealm<<endl;
     cout << "\n";


     cout << "\tMatricula:\n\t";
     fflush(stdin);
     getline(cin,matri);
     archivo2<<matri<<endl;
     cout << "\n";


     cout << "\tCarrera:​\n\t";
     fflush(stdin);
     getline(cin,nombrecarr);
     archivo2<<nombrecarr<<endl;
     cout << "\n";



        cout << "\t¡Usuario registrado con éxito!\n"<<endl;

        cout << "\t¡El préstamo se ha completado! puedes pasar a recoger el libro con el folio: "<<matri<<folio<<endl;

        archivo2.close();
        cout << "\n\n\n";
        cout << "\t1) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    }
    while(repetir);
}
          //REGISTRAR USUARIO TERMINA//


          //REPORTAR LIBRO INICIA//
void reportar_libro()
{
    char libro_report[30];
    char motivo[30];
    intmax_t telefono;
    int opcion;
    int folio;
    folio = 100 + rand();
    bool repetir = true;
    do
    {

    system("cls");
        INICIO("REPORTA UN LIBRO");


     cout << "\tIntroduzca el nombre del libro:\n\t";
     cin.getline(libro_report,sizeof(libro_report));
     cin.getline(libro_report,80);

     cout << "\n";


     cout << "\tMotivo(seleccione solo una de estas: extraviado, robado, roto):\n\t";
     cin.getline(motivo,sizeof(motivo));
     cout << "\n";


     cout << "\tTelefono:\n\t";
     cin>>telefono;
     cout << "\n";

            cout << "\n\t¡Su reporte se ha generado con exíto!\n\tSu folio de seguimiento es: "<<telefono<<folio;
            cout << ", correspondiente a los datos: \n"<<endl;
            cout<<"\tLibro: " << libro_report<< endl;
            cout << "\n";
            cout<<"\tMotivo: " << motivo<< endl;
            cout << "\n";
            cout<<"\tTelefono: " << telefono<< endl;
            cout << "\n";
            cout << "\tEn breves nos contactaremos con usted.\n"<<endl;

            cout << "\t1) <-- Volver al menú principal"<<endl;
            cout << "\t0) Salir del programa."<<endl;
            cout << "\n \n\t";
            cin >> opcion;
            cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    }
    while(repetir);
}
          //REPORTAR LIBRO TERMINA//


          //INICIAR COMO ADMIN INICIA//
void iniciar_como_admin()
{
    int opcion;
    char user[10];
    string pass;
    int x = 1;
    bool repetir = true;
    bool c = false;

    do
    {
        system("cls");
        INICIO("INICIO DE ADMINISTRADOR");
        cout << "\t¡Bienvenido! por favor, introduzca sus datos de inicio de sesión"<<endl;
        cout << "\n \n";

        while(x<=3 and c==false)
        {
            cout << "\n\tUsuario:"<<endl;
            cout << "\t";
            cin >> user;

            cout << "\n\tContrasena:"<<endl;
            cout << "\t";
            //cin >> pass;
            char caracter;
            caracter = getch();
            pass = "";
            while(caracter!=13){
                pass.push_back(caracter);
            cout<<"*";
            caracter = getch();
            }


            x++;
            if((pass == PASS) && (strcmp(user,USER)==0))
            {
               c=true;
            }
            else
            {
            cout << "\n\n\tUsuario o contrasena incorrectos"<<endl;
            cout<<"\t";
            system("pause");
            }

        }
            if (c==true)
            {
            cout << "\n\n\tHa accedido con éxito, ¡bienvenido administrador!"<<endl;

            cout << "\n\n\t1) Ir al menú de administrador -->"<<endl;
            cout << "\t0) Salir"<<endl;
            cout << "\n \n\t";
            cin >> opcion;
            }
            else
            {
            cout << "\n\n\tHa superado el límite de intentos, intente más tarde"<<endl;
            system("pause");
            }

            switch(opcion)
          {
          case 1:
              menu_admin();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //INICIAR COMO ADMIN TERMINA//


           //MENU ADMIN INICIA//
void menu_admin()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("MENÚ PRINCIPAL (ADMINISTRADOR)");
        cout << "\t!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
        cout << "\n \n";
        cout << "\t1) Agregar un libro -->"<<endl;
        cout << "\n";
        cout << "\t2) Eliminar un libro -->"<<endl;
        cout << "\n";
        cout << "\t9) <-- Volver al menú de inicio"<<endl;
        cout << "\n";
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              agregar();
            break;

          case 2:
              eliminar();
            break;

          case 9:
              menu_inicio();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
           //MENU ADMIN TERMINA//


           //AGREGAR INICIA//
void agregar()
{
    ofstream archivo;

    int opcion;
    bool repetir = true;

    archivo.open("LIBDISP.txt",ios::out);

        if(archivo.fail()){
        cout<<"El archivo no se ejecutó correctamente";
        exit(1);
                          }
    do
    {
        system("cls");
        INICIO("AGREGAR LIBRO (ADMINISTRADOR)");
        cout << "\tPor favor, introduce los siguientes datos."<<endl;
        cout << "\n \n";
        cout << "\tNombre de libro: "<<endl;
        cout << "\n\t";
        fflush(stdin);
        getline(cin,nombrelib);
        archivo<<nombrelib<<endl;
        cout << "\n \n";
        cout << "\tNombre del Autor: "<<endl;
        cout << "\n\t";
        fflush(stdin);
        getline(cin,nombreaut);
        archivo<<nombreaut<<endl;
        cout << "\n \n";
        cout << "\tAño de publicación: "<<endl;
        cout << "\n\t";
        fflush(stdin);
        getline(cin,yea);
        archivo<<yea<<endl;
        cout << "\n \n";
        cout << "\tEditorial: "<<endl;
        cout << "\n\t";
        fflush(stdin);
        getline(cin,nombreedit);
        archivo<<nombreedit<<endl;
        cout << "\n \n";
        cout << "\tSinopsis: "<<endl;
        cout << "\n\t";
        fflush(stdin);
        getline(cin,simp);
        archivo<<simp<<endl;
        cout << "\n \n";
        cout << "\tDISPONIBLE EN BIBLIOTECA(indique SI o NO): "<<endl;
        cout << "\n\t";
        fflush(stdin);
        getline(cin,scp);
        archivo<<scp<<endl;
        cout << "\n\n";

        archivo.close();


        cout << "\t1) Ver libros agregados -->"<<endl;
        cout << "\n";
        cout << "\t8) <-- Volver al menú principal(administrador)"<<endl;
        cout << "\n";
        cout << "\t9) <-- Volver al menú principal(usuario)"<<endl;
        cout << "\n";
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              titulo_libros();
            break;

          case 8:
              menu_admin();
            break;

          case 9:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }




    } while(repetir);
}
           //AGREGAR TERMINA//


           //ELIMINAR INICIA//
void eliminar()
{
    int opcion;
    bool repetir = true;
    string pass;
    int x = 1;
    bool c = false;
    do
    {
        system("cls");
        INICIO("ELIMINAR LIBRO (ADMINISTRADOR)");
        cout << "\tPor favor, introduce los siguientes datos:"<<endl;
        cout << "\n \n";
        cout << "\tNombre de libro: "<<endl;
        cout << "\n\t";
        char nlii[30];
        cin>>nlii;


        while(x<=3 and c==false)
        {
            cout << "\n\tContraseña de administrador:"<<endl;
            cout << "\n\t";
            char caracter;
            caracter = getch();
            pass = "";
            while(caracter!=13){
                pass.push_back(caracter);
            cout<<"*";
            caracter = getch();
            }
            x++;
            if((pass == PASS))
            {
               c=true;
            }
            else
            {
            cout << "\n\n\tContraseña incorrecta"<<endl;
            cout<<"\t";
            system("pause");
            }
        }
            if (c==true)
            {
                ifstream archivo;
                archivo.open("LIBDISP.txt",ios::in);
        if(archivo.fail())
        {
        cout<<"\tEl libro no existe en el registro.";
        exit(1);
        }
            archivo.close();
            remove("LIBDISP.txt");
            cout << "\n\n\tEL LIBRO HA SIDO ELIMINADO DEL REGISTRO CON ÉXITO."<<endl;

            cout << "\n\n";
        cout << "\n\n";
        cout << "\t1) Ver libros agregados -->"<<endl;
        cout << "\n";
        cout << "\t8) <-- Volver al menú principal(administrador)"<<endl;
        cout << "\n";
        cout << "\t9) <-- Volver al menú principal(usuario)"<<endl;
        cout << "\n";
        cout << "\t0) Salir del programa."<<endl;
        cout << "\n \n\t";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              titulo_libros();
            break;

          case 8:
              menu_admin();
            break;

          case 9:
              menu_principal();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
            }
            else
            {
            cout << "\n\n\tHa superado el límite de intentos, intente más tarde"<<endl;
            cout<<"\t";
            system("pause");
            menu_admin();
            }


    } while(repetir);


}


           //ELIMINAR TERMINA//
