#include <iostream>
using namespace std;
int main(){

    int punto1, punto2, punto3, extra, tempo,descalifi, errores, resta, puntaje, puntajeFinal, boni = 0;
    string rango, obs, deci = "no";


    cout<<"Ingrese puntaje 1: "<<endl;
    cin>>punto1;
    cout<<"Ingrese puntaje 2: "<<endl;
    cin>>punto2;
    cout<<"Ingrese puntaje 3: "<<endl;
    cin>>punto3;
    cout<<"Ingrese numero de errores: "<<endl;
    cin>>errores;
    cout<<"Realizó el reto extra?: ""(Si = 1, No = 0)"""<<endl;
    cin>>extra;
    cout<<"Ingrese el tiempo total ""(En minutos)"" "<<endl;
    cin>>tempo;

    if(extra == 1){
        boni += 15;
    }

    puntaje = punto1 + punto2 + punto3;

    resta = errores * 4;


    if(tempo < 30){
        boni += 10;
    }

    puntajeFinal = puntaje - errores + boni;

    if(puntajeFinal < 0){
        puntajeFinal = 0;

    }

    if(puntajeFinal >= 0 && puntajeFinal <= 29){
        rango = "Principinate";
        obs = "Sigamos practicando";
    }
    else if (puntajeFinal >= 30 && puntajeFinal <= 49){
        rango = "Basico";
        obs = "Vamos mejorando cada vez más";
    }
    else if (puntajeFinal >= 50 && puntajeFinal <= 69){
        rango = "Intermedio";
        obs = "Gran agilidad en resolver";
    }

    else if (puntajeFinal >= 70 && puntajeFinal <= 89){
        rango = "Avanzado";
        obs = "Gran desempeño";
    }

    else if (puntajeFinal >= 90){
        rango = "Experto";
        obs = "Gran habilidad en los retos";

        if(errores > 5){
            obs = "Resultado inconsistente: revisar calidad de resolución";

        }
    }

    cout<<"--------------------------PUNTAJES-----------------------"<<endl;
    cout<<"Puntaje base: "<<puntaje<<endl;
    cout<<"Penalización: Numero errores: "<<errores<<" Puntos a restar: "<<resta<<endl;

    if(extra == 1){
        deci = "si";
    }
    else{
        deci = "no";
    }
    cout<<"Bonificación: Ejercicio Extra: "<<deci<<" Puntos obtenidos: "<<boni<<endl;
    cout<<"Puntaje Final: "<<puntajeFinal<<endl;
    cout<<"Nivel: "<<rango<<endl;
    cout<<"Observación: "<<obs<<endl;

    return 0;
}
