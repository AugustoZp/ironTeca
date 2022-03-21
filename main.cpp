#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#define YELLOW  "\x1b[33m"
#define WHITE   "\x1B[37m"
#include <string>
#define TRUE 1
#define FALSE 0
#include<locale.h>
using namespace std;


void INICIO(string title)

{
    int i;
    int val;
        val = title.length();
        val = val + 50;

    for(i=0; i<= val; i++)
    {
        cout << YELLOW << "*";
    }

    cout << "\n \n";

    for (i=0; i<= val; i++)
    {
        cout << " ";
        if (i==12 )
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
          void nombre_autor();
          void nombre_editorial();
               void registrar_usuario();
    void registro_prestamos();
    void registro_alumnos();
    void reportar_libro();


void iniciar_como_admin();
    void ver_libros_admin();
         void agregar();
         void eliminar();







int main()
{
    menu_inicio();
    return 0;
}

void menu_inicio()
{
        int opcion;
        bool repetir = true;

        do
        {
            system("cls");
        INICIO("SISTEMA BIBLIOTECARIO IRONTECA");
        cout << "!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
        cout << "\n \n";

        cout << "1) Ir al menú principal -->"<<endl;
        cout << "\n";
        cout << "2) Iniciar como administrador -->"<<endl;
        cout << "\n";
        cout << "0) salir."<<endl;
        cout << "\n \n";
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
            exit(0);
          }
        } while(repetir);
}

void menu_principal()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("MENÚ PRINCIPAL");
        cout << "!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
        cout << "\n \n";
        cout << "1) Ver libros -->"<<endl;
        cout << "\n";
        cout << "2) Préstamos -->"<<endl;
        cout << "\n";
        cout << "3) Reporta un libro -->"<<endl;
        cout << "\n";
        cout << "0) salir."<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}

void menu_libros()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("LIBROS");
        cout << "Por favor, selecciona la categoría deseada."<<endl;
        cout << "\n \n";
        cout << "1) Recomendaciones -->"<<endl;
        cout << "\n";
        cout << "2) Ver títulos -->"<<endl;
        cout << "\n";
        cout << "3) Ver autores -->"<<endl;
        cout << "\n";
        cout << "4) Ver editoriales -->"<<endl;
        cout << "\n";
        cout << "0) <-- Volver al menú principal"<<endl;
        cout << "\n \n";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              cout << "holalal"<<endl;
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

void registro_prestamos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("REGISTRO DE PRÉSTAMOS REALIZADOS");


        cout << "Nombre completo: "<<endl;
        cout << "\n";
        cout << "Matrícula escolar: "<<endl;
        cout << "\n";
        cout << "Carrera: Ing. Software y sistemas computacionales"<<endl;
        cout << "\n";
        cout << "Título del libro: Patito feo"<<endl;
        cout << "\n\n\n\n\n";


        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 0:
            exit(0);
          }
    } while(repetir);
}
//LIBROS Y SUS TITULOS//

void titulo_libros()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("TITULOS");


        cout << "Contamos con los siguientes titulos:"<<endl;
        cout << "\n";
        cout << "1) LOS RETOS DEL DESTINO -->"<<endl;
        cout << "\n";
        cout << "2) EL HACEDOR DE HOMBRES -->"<<endl;
        cout << "\n";
        cout << "3) MISTERIOS GOZOSOS -->"<<endl;
        cout << "\n";
        cout << "4) IRREAL -->"<<endl;
        cout << "\n";
        cout << "5) EL ORFANATO DE HESKINN -->"<<endl;
        cout << "\n";

        cout << "\n\n\n\n\n";


        cout << "7) <-- Volver al menú de libros"<<endl;
        cout << "6) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}
//FIN  DE LIBROS Y SUS TITULOS//

//INICIO DE TODOS LOS LIBROS//
//LIBRO 1//
void libro_1()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("LOS RETOS DEL DESTINO");


        cout << "Titulo: LOS RETOS DEL DESTINO"<<endl;
        cout << "\n";
        cout << "Sinopsis: En la mañana de un once de agosto, un joven cantautor abandona Barcelona en España y se dirige a Lieja en Bélgica; acababa de cumplir veinticuatro años. En ese preciso momento, en la otra punta del mundo, una mujer entra en la maternidad, está a punto de dar a luz. Al atardecer del día siguiente, doce de agosto, el artista desembarca en la estación de los Guillemines en Lieja. Al instante, allá en la distancia, al otro lado del océano, una mujer alumbra a una hermosa niña. Dieciocho años más tarde, después de que el cantautor recorrió medio mundo con la música a cuestas, visita una isla caribeña donde encuentra a aquella niña ya con dieciocho años de edad que vive con su hermana mayor y su hermano pequeño. Las circunstancias, la casualidad o tal vez el destino hacen que se encuentren, que se enamoren perdidamente y decidan unirse en matrimonio hasta que la muerte los separe."<<endl;
        cout << "\n";
        cout << "Año de publicación: 2022"<<endl;
        cout << "\n";
        cout << "Autor: José Navarro Ballesteros"<<endl;
        cout << "\n";
        cout << "Editorial: akal"<<endl;
        cout << "\n";
        cout << "Disponibilidad:"<<endl;
        cout << "\n";
        cout << "¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "2) <-- Solicitar prestamo"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}
//LIBRO 1//

//LIBRO 2//
void libro_2()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("EL HACEDOR DE HOMBRES");


        cout << "Titulo: EL HACEDOR DE HOMBRES"<<endl;
        cout << "\n";
        cout << "Sinopsis: Las decisiones del ser creado escapan a los designios del creador. Un relato que penetra en lo más profundo de la creatividad artística. Un juego de espejos que envuelve en misterio toda la narración. Carlos de Tomás. Navalmoral de la Mata (Cáceres) 1960. Novelista, poeta y biógrafo. Entre una extensa obra, es autor de las novelas: Paisajes de Ceniza, El cuaderno veintiuno, Café Bramante, La confesión del Libio, La vida de Frank, Las Chimeneas de Moscú, Vidas en el margen, Zapatos en la estrada, o su novela memorialística: Las mujeres del César, Amarante 2020. En palabras del autor: El hacedor de hombres es una obra intensa, entretenida y misteriosa. Llena de referencias subliminales a la literatura universal que el lector puede ir descubriendo a lo largo de su lectura. Una alegoría a la construcción de cualquier obra artística, principalmente a la razón última de la creación en la literatura."<<endl;
        cout << "\n";
        cout << "Año de publicación: 2022"<<endl;
        cout << "\n";
        cout << "Autor: Carlos de Tomás"<<endl;
        cout << "\n";
        cout << "Editorial: Anagrama"<<endl;
        cout << "\n";
        cout << "Disponibilidad:"<<endl;
        cout << "\n";
        cout << "¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "2) <-- Solicitar prestamo"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}
//LIBRO 2//

//LIBRO 3//
void libro_3()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("MISTERIOS GOZOSOS");


        cout << "Titulo: MISTERIOS GOZOSOS"<<endl;
        cout << "\n";
        cout << "Sinopsis: parte de un hecho autobiográfico, la muerte de las dos personas de referencia en la vida de la protagonista y el intento de reconstruir su vida aislándose en Gozo (Malta). A partir de ahí y mientras intenta resolver en solitario su crisis como mujer y como madre, va descubriendo dos tipos de personas que definen la sociedad actual: quienes se aferran a sus creencias hasta el fanatismo y quienes, carentes de ellas, buscan desesperadamente certezas en teorías supersticiosas, exóticas, conspiranoicas o, sencillamente, desquiciadas. Pero, por debajo de esos seres a la deriva está la realidad descarnada de quienes sólo buscan la supervivencia: los inmigrantes cuyos cadáveres alfombran el Mediterráneo y que se han convertido en el enemigo a batir para un creciente número de europeos que los ven como un peligro para su identidad y bienestar. El mundo de las sectas y la extrema derecha convergen en ese punto para provocar un inesperado final."<<endl;
        cout << "\n";
        cout << "Año de publicación: 2022"<<endl;
        cout << "\n";
        cout << "Autor: Esther Bajo"<<endl;
        cout << "\n";
        cout << "Editorial: Alfaguara"<<endl;
        cout << "\n";
        cout << "Disponibilidad:"<<endl;
        cout << "\n";
        cout << "¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "2) <-- Solicitar prestamo"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}
//LIBRO 3//

//LIBRO 4//
void libro_4()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("IRREAL");


        cout << "Titulo: IRREAL"<<endl;
        cout << "\n";
        cout << "Sinopsis: No me acuerdo del momento concreto, ni de que lo motivó, pero lo cierto es que de chaval, un día me vi con un lápiz en la mano y desde entonces ya no lo he soltado. Con aquella arma en mi poder, declaré la guerra a cuanto tebeo caía en mis manos, copiando una y otra vez los personajes que vivían en aquel mundo enmarcado en viñetas. Una cosa llevó a la otra y cuando quise darme cuenta me encontré con mis piernas invadidas por un pelaje adolescente y trabajando en una agencia de publicidad. Con las tres comidas diarias aseguradas, mi lápiz y yo seguimos camino. Unos trazos fueron dando paso a otros, y se produjo una curiosa metamorfosis: se transformaron en letras que, apareándose entre sí, alumbraron una serie de relatos. Los recién nacidos pronto crecieron y como buenos hermanos decidieron unirse formando una pandilla única. Irreal, la bauticé. Desde entonces, no pasa un día (con la preocupación natural que siente un padre por sus hijos), en que no imagine cómo serán de mayores…  Resumiendo con el menor número de palabras posibles: Lo que aquí se relata se basa en hechos totalmente irreales por lo que la veracidad de los mismos queda sujeta al libre albedrío de quienes los lean."<<endl;
        cout << "\n";
        cout << "Año de publicación: 2022"<<endl;
        cout << "\n";
        cout << "Autor: Juan Carlos Cámara"<<endl;
        cout << "\n";
        cout << "Editorial: Alianza"<<endl;
        cout << "\n";
        cout << "Disponibilidad:"<<endl;
        cout << "\n";
        cout << "¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "2) <-- Solicitar prestamo"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}
//LIBRO 4//

//LIBRO 5//
void libro_5()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("EL ORFANATO DE HESKINN");


        cout << "Titulo: EL ORFANATO DE HESKINN"<<endl;
        cout << "\n";
        cout << "Sinopsis: El joven sueco Isak Berg, se ve obligado a ingresar en el Orfanato Heskinn tras la dolorosa pérdida de sus padres a manos de dos individuos. Solitario, tras los valles de la isla sueca de Gotland (Visby), se encuentra el peculiar edificio, construido en el siglo XVIII por altos nobles de la isla. Cuando llega al deteriorado y escalofriante lugar, comienzan a suceder hechos macabros que parecen tener una conexión entre ellos. Descubrirá secretos del pasado de los trabajadores y compañeros que parecen querer esconder algo más de lo que muestran. Pero su inseguridad aumentará cuando conozca la leyenda de un chico llamado Börje Persson, que pareció haber asesinado a dos menores en algún momento de su vida, y la extraña presencia de notas en el lavabo, escritas a mano incoherentemente. ¿Hasta dónde estarías dispuesto a llegar para sobrevivir?"<<endl;
        cout << "\n";
        cout << "Año de publicación: 2013"<<endl;
        cout << "\n";
        cout << "Autor: Javier Berzosa"<<endl;
        cout << "\n";
        cout << "Editorial: Astiberri"<<endl;
        cout << "\n";
        cout << "Disponibilidad:"<<endl;
        cout << "\n";
        cout << "¿Que acción quiere realizar?:"<<endl;
        cout << "\n";

        cout << "2) <-- Solicitar prestamo"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
            exit(0);
          }
    } while(repetir);
}
//LIBRO 5//

void nombre_autor()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("AUTORES");


        cout << "Contamos con los siguientes autores:"<<endl;
        cout << "\n";
        cout << "--> José Navarro Ballesteros"<<endl;
        cout << "\n";
        cout << "--> Carlos de Tomás"<<endl;
        cout << "\n";
        cout << "--> Esther Bajo"<<endl;
        cout << "\n";
        cout << "--> Juan Carlos Cámara"<<endl;
        cout << "\n";
        cout << "--> Javier Berzosa"<<endl;
        cout << "\n\n\n\n\n";


        cout << "2) <-- Volver al menú de libros"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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

void nombre_editorial()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("EDITORIALES");


        cout << "Contamos con las siguientes editoriales:"<<endl;
        cout << "\n";
        cout << "--> Akal"<<endl;
        cout << "\n";
        cout << "--> Anagrama"<<endl;
        cout << "\n";
        cout << "--> Alfaguara"<<endl;
        cout << "\n";
        cout << "--> Alianza"<<endl;
        cout << "\n";
        cout << "--> Astiberri"<<endl;
        cout << "\n\n\n\n\n";

        cout << "2) <-- Volver al menú  de libros"<<endl;
        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
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
//REGISTRAR USUARIO INICIO//

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

    cout << "Por favor introduce los datos solicitados​:";
    cout << "\n \n";

     cout << "Nombre completo:";
     cin.getline(nombre_com,sizeof(nombre_com));
     cin.getline(nombre_com,50);
     cout << "\n";


     cout << "Matricula: ";
     cin>>matricula;
     cout << "\n";


     cout << "Carrera:​";
     cin.getline(carrera,sizeof(carrera));
     cin.getline(carrera,50);
     cout << "\n";



        cout << "\n¡usuario registrado con éxito!";
        cout << "\n";

        cout << "\n¡El préstamo se ha generado con éxito! \n tu folio identificador es :​";



        cout<<matricula;
        cout<< folio;

        cout << ",correspondiente a los datos: \n"<<endl;

        cout<<"usuario solicitante:"  << nombre_com<<endl;
        cout << "\n";
        cout<<"matricula: " << matricula<< endl;
        cout << "\n";
        cout<<"Carrera:" << carrera<< endl;
        cout << "\n";


        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 0:
            exit(0);
          }
    }
    while(repetir);
}
//REGISTRAR USUARIO TERMINA//

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


     cout << "Introduzca el nombre del libro:";
     cin.getline(libro_report,sizeof(libro_report));
     cin.getline(libro_report,80);

     cout << "\n";


     cout << "motivo(seleccione solo una de estas: extraviado, robado, roto):";
     cin.getline(motivo,sizeof(motivo));
     cout << "\n";


     cout << "telefono: ";
     cin>>telefono;
     cout << "\n";



        cout << "\nTu reporte se ha generado con exíto\nTu folio de seguimiento es: ";


        cout<<telefono;
        cout<< folio;
        cout << ",correspondiente a los datos: \n"<<endl;

        cout<<"libro: " << libro_report<< endl;
        cout << "\n";
        cout<<"motivo: " << motivo<< endl;
        cout << "\n";
        cout<<"telefono: " << telefono<< endl;
        cout << "\n";


        cout << "1) <-- Volver al menú principal"<<endl;
        cout << "0) Salir"<<endl;
        cout << "\n \n";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              menu_principal();
            break;

          case 0:
            exit(0);
          }
    }
    while(repetir);
}














void iniciar_como_admin()
{
    int opcion;
    int matri;
    bool repetir = true;

    do
    {
        system("cls");
        INICIO("INICIO DE ADMINISTRADOR");
        cout << "!Bienvenido¡ por favor, selecciona la opción deseada."<<endl;
        cout << "\n \n";
        cout << "matricula"<<endl;
        cin >> matri;
        cout << "\n";
        cout << "2) Préstamos -->"<<endl;
        cout << "\n";
        cout << "3) Reporta un libro -->"<<endl;
        cout << "\n";
        cout << "0) salir."<<endl;
        cout << "\n \n";
        cin >> opcion;
        cout << "\n \n";

        switch(opcion)
          {
          case 1:
              cout << "hola"<<endl;
            break;

          case 2:
            cout << "hola"<<endl;
            break;

          case 3:
            cout << "hola"<<endl;
            break;

          case 0:
            exit(0);
          }
    } while(repetir);
}

