#include "pch.h"
#include <string>
#include "List.h"
#include <iostream>

using namespace System;

int main(array<System::String^>^ args)
{
    List lista;

    int re2, elem, back, resp;
    bool r1 = true;


    while (r1)
    {
        Console::WriteLine("--------Lab 04 Emilio Contreras 1246423 -------");
        Console::WriteLine();
        Console::WriteLine("                      Lista Simple              ");
        Console::WriteLine();
        Console::WriteLine("---------------------------------------------------");
        Console::WriteLine();
        Console::WriteLine("1.A�adir un elemento al FINAL de la lista");
        Console::WriteLine();
        Console::WriteLine("2.Eliminar todos los elementos de la lista");
        Console::WriteLine();
        Console::WriteLine("3.Contar la cantidad de elementos de la lista");
        Console::WriteLine();
        Console::WriteLine("4.Verificar si un elemento se encuentra en la lista");
        Console::WriteLine();
        Console::WriteLine("5.Obtener el �ndice de la primera ocurrencia de un elemento en la lista");
        Console::WriteLine();
        Console::WriteLine("6.Insertar un elemento en una posici�n espec�fica de la lista");
        Console::WriteLine();
        Console::WriteLine("7.Obtener el valor del elemento en una posicion espec�fica de la lista");
        Console::WriteLine();
        Console::WriteLine("8.Cambiar el elemento en una posici�n espec�fica de la lista");
        Console::WriteLine();
        Console::WriteLine("9.Obtener el indice de la �ltima ocurrencia de un elemento en la lista");
        Console::WriteLine();
        Console::WriteLine("10.Eliminar la primera ocurrencia del elemento en la lista");
        Console::WriteLine();
        Console::WriteLine("11.Eliminar el elemento en una posici�n espec�fica de la lista ");
        Console::WriteLine();
        Console::WriteLine("12. Salir");
        Console::WriteLine();
        try
        {
            re2 = Convert::ToInt32(Console::ReadLine());
        }
        catch (FormatException^)
        {
            Console::WriteLine("Ingrese una opcion valida");
        }

        if (re2 < 1 || re2 > 12)
        {
            Console::WriteLine("Ingrese una opcion valida");
            continue;
        }
        else
        {
            Console::Clear();
            switch (re2)
            {
            case 1:
                while (true)
                {
                    try
                    {
                        Console::WriteLine("Ingrese el elemento a ingresar en la lista");
                        elem = Convert::ToInt32(Console::ReadLine());
                        lista.Add(elem);
                        Console::Clear();
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("El elemento debe ser un numero entero");
                        std::cout << "\033[F\033[K";
                    }

                    try
                    {
                        Console::WriteLine("�Desea continuar?");
                        Console::WriteLine("1.Si");
                        Console::WriteLine("2.No");
                        back = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();
                        if (back == 1)
                        {
                            continue;

                        }
                        else
                        {
                            break;


                        }
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Escoja una opci�n v�lida");
                        std::cout << "\033[F\033[K";
                    }
                }

                break;

            case 2:
                try
                {
                    Console::WriteLine("Esta seguro que desea borrar la lista ");
                    Console::WriteLine("1.Si");
                    Console::WriteLine("2.No");

                    resp = Convert::ToInt32(Console::ReadLine());
                    Console::Clear();
                    if (resp == 1)
                    {
                        lista.Clear();
                        Console::WriteLine("La lista ha sido borrada con �xito");
                        Console::WriteLine();
                        Console::WriteLine("Presione cualquier tecla para continuar");
                        Console::ReadKey();

                    }
                }
                catch (FormatException^)
                {
                    Console::WriteLine("Ingrese una opci�n valida");
                    std::cout << "\033[F\033[K";
                }


                break;

            case 3:

                Console::WriteLine("La lista tiene " + lista.Count() + " elementos");
                Console::WriteLine();
                Console::WriteLine("Presione cualquier tecla para continuar");
                Console::ReadKey();

                break;

            case 4:
                while (true)
                {
                    try
                    {
                        Console::WriteLine("Ingrese el elemento que quiere buscar en la lista");
                        resp = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();

                        if (lista.Contains(resp))
                        {
                            Console::WriteLine("El elemento " + resp + " SI se encuentra en la lista");

                        }
                        else
                        {
                            Console::WriteLine("El elemento " + resp + " NO se encuentra en la lista");
                        }
                        Console::WriteLine();

                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("El elemento debe ser un numero entero");
                        std::cout << "\033[F\033[K";
                    }

                    try
                    {
                        Console::WriteLine("�Desea continuar buscando?");
                        Console::WriteLine("1.Si");
                        Console::WriteLine("2.No");
                        back = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();
                        if (back == 1)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Escoja una opci�n v�lida");
                        std::cout << "\033[F\033[K";

                    }
                }
                break;
            case 5:
                while (true)
                {
                    try
                    {
                        Console::WriteLine("Ingrese el elemento del que desee saber la posicion de su primera ocurrencia");
                        resp = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();

                        if (lista.IndexOf(resp) == -1)
                        {
                            Console::WriteLine("El elemento " + resp + " no fue encontrado en la lista");

                        }
                        else
                        {
                            Console::WriteLine("El elemento " + resp + " esta en la posicion " + lista.IndexOf(resp) + " de la lista");
                        }

                        Console::WriteLine();
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("El elemento debe ser un numero entero");
                        std::cout << "\033[F\033[K";
                    }

                    try
                    {
                        Console::WriteLine("�Desea continuar?");
                        Console::WriteLine("1.Si");
                        Console::WriteLine("2.No");
                        back = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();
                        if (back == 1)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Escoja una opci�n v�lida");
                        std::cout << "\033[F\033[K";

                    }

                }

                break;

            case 6:

                while (true)
                {
                    try
                    {
                        Console::WriteLine("Ingrese el elemento que agregar�");
                        resp = Convert::ToInt32(Console::ReadLine());
                        Console::WriteLine("Ingrese la posici�n en la que se agregar� el elemento");
                        int n2 = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();

                        lista.Insert(n2, resp);
                        Console::WriteLine();

                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Ingrese numeros enteros");
                        std::cout << "\033[F\033[K";

                    }

                    try
                    {
                        Console::WriteLine("�Desea continuar?");
                        Console::WriteLine("1.Si");
                        Console::WriteLine("2.No");
                        back = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();
                        if (back == 1)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Escoja una opci�n v�lida");
                        std::cout << "\033[F\033[K";

                    }


                }

                break;

            case 7:

                while (true)
                {
                    try
                    {
                        Console::WriteLine("Ingrese la posici�n de la quiere conocer el elemento que esta en ella");
                        resp = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();

                        if (lista.GetItem(resp) == -1)
                        {
                            Console::WriteLine("Error, no se encontr� ningun valor en esa posici�n");

                        }
                        else
                        {
                            Console::WriteLine("En la posici�n " + resp + " se encuentra el elemento " + lista.GetItem(resp));
                        }

                        Console::WriteLine();

                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Ingrese numeros enteros");
                        std::cout << "\033[F\033[K";

                    }

                    try
                    {
                        Console::WriteLine("�Desea continuar?");
                        Console::WriteLine("1.Si");
                        Console::WriteLine("2.No");
                        back = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();
                        if (back == 1)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Escoja una opci�n v�lida");
                        std::cout << "\033[F\033[K";
                        Console::Clear();
                    }


                    break;

            case 8:
                try
                {
                    Console::WriteLine("Ingrese la posicion en la que quiere cambiar su elemento");
                    resp = Convert::ToInt32(Console::ReadLine());
                    Console::WriteLine("Ingrese el elemento que va agregar");
                    int n3 = Convert::ToInt32(Console::ReadLine());

                    lista.SetItem(resp, n3);
                }
                catch (FormatException^)
                {
                    Console::WriteLine("Ingrese numeros enteros");
                    std::cout << "\033[F\033[K";
                }

                break;

            case 9:

                while (true)
                {
                    try
                    {
                        Console::WriteLine("Ingrese el elemento del que desee saber la posicion de su ultima ocurrencia");
                        resp = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();

                        if (lista.LastIndexOf(resp) == -1)
                        {
                            Console::WriteLine("El elemento " + resp + " no fue encontrado en la lista");

                        }
                        else
                        {
                            Console::WriteLine("El elemento " + resp + " esta en la posicion " + lista.LastIndexOf(resp) + " de la lista");
                        }

                        Console::WriteLine();

                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("El elemento debe ser un numero entero");
                        std::cout << "\033[F\033[K";
                    }

                    try
                    {
                        Console::WriteLine("�Desea continuar?");
                        Console::WriteLine("1.Si");
                        Console::WriteLine("2.No");
                        back = Convert::ToInt32(Console::ReadLine());
                        Console::Clear();
                        if (back == 1)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    catch (FormatException^)
                    {
                        Console::WriteLine("Escoja una opci�n v�lida");
                        std::cout << "\033[F\033[K";

                    }
                }

                break;

            case 10:
                Console::WriteLine("Ingrese el elemento que va a eliminar (su primera ocurrencia)");
                resp = Convert::ToInt32(Console::ReadLine());
                Console::Clear();

                if (lista.Remove(resp))
                {
                    Console::WriteLine("El elemento fue borrado con exito");


                }
                else
                {
                    Console::WriteLine("El elemento no pudo ser borrado");

                }

                Console::WriteLine();
                try
                {
                    Console::WriteLine("�Desea continuar?");
                    Console::WriteLine("1.Si");
                    Console::WriteLine("2.No");
                    back = Convert::ToInt32(Console::ReadLine());
                    Console::Clear();
                    if (back == 1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                catch (FormatException^)
                {
                    Console::WriteLine("Escoja una opci�n v�lida");
                    std::cout << "\033[F\033[K";

                }


                break;

            case 11:

                Console::WriteLine("Ingrese la posicion que quiere eliminar");
                resp = Convert::ToInt32(Console::ReadLine());
                Console::Clear();

                lista.RemoveAt(resp);

                Console::WriteLine();

                try
                {
                    Console::WriteLine("�Desea continuar?");
                    Console::WriteLine("1.Si");
                    Console::WriteLine("2.No");
                    back = Convert::ToInt32(Console::ReadLine());
                    Console::Clear();
                    if (back == 1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                catch (FormatException^)
                {
                    Console::WriteLine("Escoja una opci�n v�lida");
                    std::cout << "\033[F\033[K";

                }

                break;
            case 12:

                r1 = false;

                break;
                }
            }


        }




    }
}





