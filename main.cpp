#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#define YELLOW  "\x1b[33m"
#define WHITE   "\x1B[37m"
#include <string>
#define TRUE 1
#define FALSE 0
#define USER "root"
#define PASS "admin"
using namespace std;

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
          void nodisp();
          void nombre_autor();
          void nombre_editorial();
               void registrar_usuario();
    void registro_prestamos();
    void registro_alumnos();
    void reportar_libro();


void iniciar_como_admin();
    void menu_admin();
         void agregar();
         void eliminar();






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
        cout << "\t0) salir."<<endl;
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
        cout << "\t2) Préstamos -->"<<endl;
        cout << "\n";
        cout << "\t3) Reporta un libro -->"<<endl;
        cout << "\n";
        cout << "\t0) salir."<<endl;
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
              cout << "MOANA HAZ TU CHAMBA MIJA - augusto :3"<<endl;
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
        INICIO("REGISTRO DE PRÉSTAMOS REALIZADOS");


        cout << "\tNombre completo: "<<endl;
        cout << "\n";
        cout << "\tMatrícula escolar: "<<endl;
        cout << "\n";
        cout << "\tCarrera: Ing. Software y sistemas computacionales"<<endl;
        cout << "\n";
        cout << "\tTítulo del libro: Patito feo"<<endl;
        cout << "\n\n\n\n\n";


        cout << "\t1) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir"<<endl;
        cout << "\n \n";
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

        cout << "\n\n\n\n\n";


        cout << "\t7) <-- Volver al menú de libros"<<endl;
        cout << "\t6) <-- Volver al menú principal"<<endl;
        cout << "\t0) Salir"<<endl;
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
              menu_principal();
            break;

          case 7:
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

        cout << "\t2) Solicitar préstamo -->"<<endl;
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
              registrar_usuario();
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

        cout << "\t2) Solicitar préstamo -->"<<endl;
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
              registrar_usuario();
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

        cout << "\t2) Solicitar préstamo -->"<<endl;
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
              registrar_usuario();
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

        cout << "\t2) Solicitar préstamo -->"<<endl;
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
              nodisp();
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

        cout << "\t2) Solicitar préstamo -->"<<endl;
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
              nodisp();
            break;

          case 0:
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //FIN LIBRO 5//

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
              cout << "\t¡¡Hasta luego!!"<<endl;
            exit(0);
          }
    } while(repetir);
}
          //NOMBRE DE EDITORIALES TERMINA//


          //REGISTRAR USUARIO INICIA//
void registrar_usuario()
{
    char nombre_com[50];
    float matricula;
    char carrera[50];
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

     cout << "\tNombre completo:";
     cin.getline(nombre_com,sizeof(nombre_com));
     cin.getline(nombre_com,50);
     cout << "\n";


     cout << "\tMatricula:";
     cin>>matricula;
     cout << "\n";


     cout << "\tCarrera:​";
     cin.getline(carrera,sizeof(carrera));
     cin.getline(carrera,50);
     cout << "\n";



        cout << "\t¡Usuario registrado con éxito!"<<endl;

        cout << "\t¡El préstamo se ha completado! puedes pasar a recoger el libro con tu folio: "<<matricula<<folio<<endl;

        cout << "\tCorrespondiente a los datos: \n"<<endl;

        cout<<"\tUsuario solicitante: "  << nombre_com<<endl;
        cout << "\n";
        cout<<"\tMatricula: " << matricula<< endl;
        cout << "\n";
        cout<<"\tCarrera: " << carrera<< endl;
        cout << "\n";


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


     cout << "\tIntroduzca el nombre del libro:";
     cin.getline(libro_report,sizeof(libro_report));
     cin.getline(libro_report,80);

     cout << "\n";


     cout << "\tMotivo(seleccione solo una de estas: extraviado, robado, roto):";
     cin.getline(motivo,sizeof(motivo));
     cout << "\n";


     cout << "\tTelefono: ";
     cin>>telefono;
     cout << "\n";



        cout << "\n\tTu reporte se ha generado con exíto\n\tTu folio de seguimiento es: ";


        cout<<telefono;
        cout<< folio;
        cout << ",correspondiente a los datos: \n"<<endl;

        cout<<"\tlibro: " << libro_report<< endl;
        cout << "\n";
        cout<<"\tmotivo: " << motivo<< endl;
        cout << "\n";
        cout<<"\ttelefono: " << telefono<< endl;
        cout << "\n";


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
    char pass[10];
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
            cin >> pass;
            x++;
            if((strcmp(pass,PASS)==0) && (strcmp(user,USER)==0))
            {
               c=true;
            }
            else
            {
            cout << "\n\n\tUsuario o contrasena incorrectos"<<endl;
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
        cout << "\t0) salir."<<endl;
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
cout << "\t!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
}
           //AGREGAR TERMINA//


           //ELIMINAR INICIA//
void eliminar()
{
cout << "\t!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
}
           //ELIMINAR TERMINA//
