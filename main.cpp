#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
   - Añadir un libro al archivo
   - Mostrar todos los libros del archivo
   - Poder borrar un libro
   - Poder ordenar los libros por orden alfabético
   - Ordenar los libros por orden alfabético cada vez que se añada un libro nuevo
*/   

class Book{
private:
   string Titulo;
   string Autor;
   int Ano;
   string Genero;

public:
   Book(string titulo, string autor, int ano, string genero){
      Titulo = titulo;
      Autor = autor;
      Ano = ano;
      Genero = genero;
   };

   string getTitulo(){
      return Titulo;
   }

   string getAutor(){
      return Autor;
   }

   string getGenero(){
      return Genero;
   }

   int getAno(){
      return Ano;
   }

};

Book AnadirLibro(){
   string titulo;
   string autor;
   int ano;
   string genero;

   cout << endl << "Introduce el título del libro: ";
   getline(cin>>ws, titulo);

   cout << "Introduce el autor del libro: ";
   getline(cin>>ws, autor);

   cout << "Introduce el año de publicación del libro: ";
   cin >> ano;

   cout << "Introduce el género del libro: ";
   getline(cin>>ws, genero);

   return Book(titulo, autor, ano, genero);
}


int BuscarLibro(string titulo, vector<Book>arr){
   for (int i = 0; i<arr.size(); i++){
      if (arr[i].getTitulo() == titulo) {
        return i; 
      }
   }

   return -1;
}


int main()
{
   vector<Book>arr;    
   while (true){
      int opcion;

      cout << endl << "1. Añadir un libro al archivo" << endl;
      cout << "2. Borrar un libro del archivo" << endl;
      cout << "3. Ver todos los libros del archivo" << endl;
      cout << "4. Buscar un libro en especial del archivo" << endl;

      cin >> opcion;

      if (opcion == 1){
         arr.push_back(AnadirLibro());
      }

      if (opcion == 2){
         int index;

         string busqueda;
         cin >> busqueda;
         index = BuscarLibro(busqueda, arr); 

         if (index != -1) {
            arr.erase(index); // This is broken, idk
         }
      }
   } 

   return 0;
}
