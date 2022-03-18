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
              cout << "holalal"<<endl;
            break;

          case 3:
              cout << "holalal"<<endl;
            break;

          case 4:
              cout << "holalal"<<endl;
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

void reportar_libro()
{
    char libro_report[30];
    char motivo[30];
    intmax_t telefono;
    int opcion;
    int folio;
    folio= 16;
    bool repetir = true;

    do
    {

    system("cls");
        INICIO("REPORTA UN LIBRO");


     cout << "Introduzca el nombre del libro:";
     cin>>libro_report;
     cout << "\n";


     cout << "motivo(seleccione solo una de estas: extraviado, robado, roto):";
     cin.getline(motivo,sizeof(motivo));
     cin>>motivo;
     cout << "\n";


     cout << "telefono: ";
     cin>>telefono;




        cout << "\n Tu folio de seguimiento es: ";

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

