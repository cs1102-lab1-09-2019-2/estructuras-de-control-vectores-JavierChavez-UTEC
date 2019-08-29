#include <iostream>
#include <vector>
using namespace std;

vector<int>leerColsola(){
    vector<int>lista;
    int num;
    while (true){
        cout<<"Ingrese un numero positivo...";
        cin>>num;
        if (num<0){
            break;
        }
        lista.push_back(num);
    }
    return lista;
}

float calcularPromedio(vector<int> &v){
    for (int i=0; i<v.size(); i++){
        suma += v[i];
    }
    return (float)suma/v.size();
}

int main(){
    cout<<"Calcular promedio de los numeros ingresados:"<<"\n";
    vector<int> leerUsuario=leerConsola();
    float promedio = calcularPromedio (leerUsuario);
    cout<<"El promedio es:"<<promedio<<"\n";

}
