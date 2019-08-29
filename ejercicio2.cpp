#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
​
float calcularPromedio(vector<int> &v);
float calcularModa(vector<int> &lista);
vector<int> leerConsola();
​
float calcularPromedio(vector<int> &v) {
    int suma = 0;
    for (int i = 0; i < v.size(); i++) {
        suma += v[i];
    }
    return (float)suma/v.size();
}
​
float calcularModa(vector<int> &lista) {
    unordered_map<int, int> map;
    for (int i = 0; i < lista.size(); i++) {
        map[lista[i]]++;
    }
    int moda, max = -10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
}
​
vector<int> leerConsola() {
    vector<int> lista;
    int num;
    while (true) {
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
        cin>>num;
        if (num<0) {
            break;
        }
        lista.push_back(num);
    }
    return lista;
}
​
​
int main() {
    cout<<"Calcular el promedio de numeros ingresados:\n";
    vector<int> leerUsuario = leerConsola();
    float promedio = calcularPromedio(leerUsuario);
    cout<<"El promedio es: "<<promedio<<"\n";
    int moda = calcularModa(leerUsuario);
    cout<<"La moda es : "<<moda<<"\n";
    return 0;
}
