#include <iostream>
#include <fstream>
void escribir();
void leer();
using namespace std;
int main() {
int op;
char i,w;
do{
cout<<"1.INGRESE EL CONTACTO\n";
cout<<"2.MOSTRAR EL CONTACTO\n";
cout<<"ELIJA UNA OPCION:";
cin>>op;
switch(op){
case  1:
escribir();

break;
  case 2:
  leer();
  break;
  }
cout<<"PRESIONA s PARA CONTINUAR:";
cin>>i;
}
while(i=='s');
return 0;

}

void escribir(){
int edad;
string nombre;
string apellido;
string carrera;

string nombrearchivo;
char r;

ofstream archivo;
cout<<"NOMBRE DEL ARCHIVO:";

getline(cin,nombrearchivo);
cin>>nombrearchivo;
archivo.open(nombrearchivo.c_str(),ios::out);
do{

cout<<"INGRESA TU NOMBRE:";
cin>>nombre;
cout<<"INGRESA TU APELLIDO:";
cin>>apellido;
cout<<"INGRESA TU CARRERA:";
cin>>carrera;
cout<<"INGRESA TU EDAD:";
cin>>edad;

archivo<<nombre<<" "<<apellido<<" "<<carrera<<" "<<edad<<endl;
cout<<"QUIERES SEGUIR AÑADIENDO CONTACTOS s/n:";
cin>>r;
cin.ignore();
}
while(r=='s');
archivo.close();

}
void leer(){
int edad;
string nombre;
string apellido;
string carrera;

ifstream archivorec("contactos.txt");
string text;
while(!archivorec.eof())
{
archivorec>>nombre>>apellido>>carrera>>edad;
getline(archivorec,text);

if (!archivorec.eof()){
cout<<"Nombre:"<<nombre<<endl;
cout<<"Apellido:"<<apellido<<endl;
cout<<"Carrera:"<<carrera<<endl;
cout<<"Edad:"<<edad<<endl;
}

}
archivorec.close();

}