#include "pch.h"
#include "List.h"
#include <iostream>

//Hecho
void List::Add(int item)
{
	Node* Nuevo = new Node();

	Nuevo->data = item;

	if (header == nullptr)
	{
		header = Nuevo;
		header->next = nullptr;

	}
	else
	{
		Node* Actual = header;

		while (true)
		{
			if (Actual->next == nullptr)
			{
				Actual->next = Nuevo;
				Nuevo->next = nullptr;
				break;

			}
			else
			{
				Actual = Actual->next;

			}

		}
	}
}

//Hecho
void List::Clear()
{
	Node* Actual = header;

	while (Actual != nullptr)
	{
		Node* Siguiente = Actual->next;
		delete (Actual);

		Actual = Siguiente;

	}

	header = nullptr;

}

//Hecho
int List::Count()
{
	Node* Actual = header;
	int contador = 0;
	while (Actual != nullptr)
	{
		contador++;
		Actual = Actual->next;
	}

	return contador;

}

//Hecho
bool List::Contains(int item)
{
	Node* Actual = header;

	while (Actual != nullptr)
	{
		if (Actual->data == item)
		{
			return true;
			break;
		}
		else
		{
			Actual = Actual->next;
		}
	}

	if (Actual == nullptr)
	{
		return false;
	}
}


//Hecho
int List::IndexOf(int item)
{
	Node* Actual = header;
	int posicion = 0;

	while (Actual != nullptr)
	{
		if (Actual->data == item)
		{
			return posicion;
			break;
		}
		else
		{
			Actual = Actual->next;
			posicion++;
		}
	}

	return -1;

}


//Done
void List::Insert(int index, int item)
{
	Node* Nuevo = new Node();
	Nuevo->data = item;

	Node* Actual = header;
	Node* Anterior = header;

	if (index >= 0 && index <= Count())
	{
		if (index == 0)
		{
			Nuevo->next = header;
			header = Nuevo;
		}
		else {
			int posicion = 0;

			while (Actual != nullptr)
			{
				if (posicion == index)
				{
					Anterior->next = Nuevo;
					Nuevo->next = Actual;
					break;
				}
				else
				{
					Anterior = Actual;
					Actual = Actual->next;
					posicion++;
				}
			}
		}

		std::cout << "El elemento fue insertado con éxito";

	}
	else
	{
		std::cout << "Error, no fue posible insertar el valor";
	}
}

//Hecho
int List::GetItem(int index)
{
	Node* Actual = header;
	int posicion = 0;
	if (index >= 0 && index <= Count())
	{
		while (Actual != nullptr)
		{
			if (posicion == index)
			{
				return Actual->data;
			}
			else
			{
				Actual = Actual->next;
				posicion++;
			}

		}
	}
	else
	{
		return -1;
	}

}

//done
void List::SetItem(int index, int item)
{
	Node* Actual = header;
	int posicion = 0;
	if (index >= 0 && index <= Count())
	{
		while (Actual != nullptr)
		{
			if (posicion == index)
			{
				Actual->data = item;
				break;
			}
			else
			{
				Actual = Actual->next;
				posicion++;
			}

		}

		std::cout << "El cambio fue realizado con éxito";
	}
	else
	{
		std::cout << "Error, no se pudo realizar el proceso";
	}

}

//Hecho
int List::LastIndexOf(int item)
{
	Node* Actual = header;
	int posicion = 0;
	int indice = -1;

	while (Actual != nullptr)
	{
		if (Actual->data == item)
		{
			indice = posicion;


		}
		posicion++;
		Actual = Actual->next;
	}

	return indice;

}

//Hecho
bool List::Remove(int item)
{
	Node* Actual = header;
	Node* Anterior = header;

	while (Actual != nullptr)
	{
		if (header->data == item)
		{
			header = Actual->next;
			delete Actual;
			return true;


		}

		if (Actual->data == item)
		{
			Anterior->next = Actual->next;
			delete Actual;
			return true;

		}
		else
		{
			Anterior = Actual;
			Actual = Actual->next;

		}
	}

	return false;


}


///Hecho
///Borrar una posicion determinada de la lista

void List::RemoveAt(int index)
{
	Node* Actual = header;
	Node* Anterior = header;
	int posicion = 0;

	if (index >= 0 && index <= Count())
	{
		if (index == 0)
		{
			header = Actual->next;
			delete Actual;

		}
		else
		{
			while (true)
			{
				if (posicion == index)
				{
					Anterior->next = Actual->next;
					delete Actual;
					break;
				}
				else
				{
					Anterior = Actual;
					Actual = Actual->next;
					posicion++;
				}

			}
		}

		std::cout << "El proceso fue completado exitosamente";
	}
	else
	{
		std::cout << "Error, no se pudo completar el proceso";
	}


}