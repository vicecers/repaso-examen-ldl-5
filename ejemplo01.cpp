#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
 int v1[]={2,4,6,5,9}, v2[5], sum=0, i, cont=0, cont2=0;

for(int i=0; i < 5; i++ ){
    cout<< v1[i] << "\t";
}
/*
for(int i=0; i < 5; i++ ){
    cout<< "ingrese el dato:" << "[" << i << "]" << " ";
    cin>> v2[i];
}
for(int i=0; i<5; i++){
cout<< v2[i] << endl;
}
*/
/* Sumatoria y promedio
for(i=0; i < 5 ; i++ ){
    sum= sum + v1[i];
}
 cout << endl << endl;
 cout<< "la suma total del vector da:" << "[" << sum << "]";
 cout << endl << endl;
 cout<< " el promedio del vector da:" << "[" << sum / i << "]";
*/

//Contar elementos que cumplan un condición

for(int i=0; i< 5;  i++ ){
    if(v1[i] % 2 == 0){
        cont = cont + 1; //cont++
    }

}
cout << endl << endl;
cout << "los numeros pares que hay son:" << "[" << cont << "]" << endl;

for(int i=0; i< 5; i++ ){
    if (!(v1[i] % 2 == 0)){
        cont2 = cont2 +1; 
    }
}
cout << endl << endl;
cout << "los numeros impares que hay son:" << "[" << cont2 << "]" << endl;

    return 0;
}
