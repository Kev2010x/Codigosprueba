/*defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos:
 el nombre de la persona y un valor  de tipo logico que indica  si la persona tiene algun tipo de discapacidad 
 realice  una programa que dado un vector   de personas rellene dos nuevos vectores : uno que  contenga las personas 
 que no tienen ninguna discapacidad  y otro que contenga las personas con discapacidad*/

 #include<iostream>
 #include<conio.h>
 #include<string.h>

 using namespace std;
 struct Persona{
     char nombre[30];
     bool condicion;  
 }personas[100],personasConD[100],personasSinD[100];
 int main(){ 
 int cant_personas,k=0,j=0;

 cout<<"Digite la cantidad de personas: ";
 cin>>cant_personas;

for(int i=0;i<cant_personas;i++){
    fflush(stdin);
    cout<<"Nombre: ";
    cin.getline(personas[i].nombre,30,'\n');
    cout<<"Condicion (1/0): ";
    cin>>personas[i].condicion;
//usar contadores para asi evitar que haya espacios de mpas al usar como contador i
    if(personas[i].condicion==1){
        strcpy(personasConD[j].nombre,personas[i].nombre);
        j++;
    }
    else {
        strcpy(personasSinD[k].nombre,personas[i].nombre);
        k++;}

    

    cout<<"\n";
}
cout<<"Personas con discapacidad: "<<endl;
for(int i=0;i<j;i++){
    cout<<personasConD[i].nombre<<endl;
}
cout<<"\n";
cout<<"Personas sin discapacidad: "<<endl;
for(int i=0;i<k;i++){
    cout<<personasSinD[i].nombre<<endl;
}

getch();
return 0;

}