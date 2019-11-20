#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <chrono>
#include <ctime>
#include <sstream>
#include <cstring>
using namespace std;

//DATOS SE CALCULO
    float calo=0,calc=0,A=0,C=0,ht=0,wt=0,prot=0;
    int ag=0,buffer=10;
    string name,arcname=name+".txt";
    char sx[1];
    string auxt[4];
//HORA DE REGISTRO:
    time_t now = time(0);
    char* dt = ctime(&now);
//FUNCIONES DE CREACION DE ARCHIVOS:
    void p_registros(){
        ofstream usuarios("sign_in.txt");
        if(usuarios.is_open()){
            usuarios<<"REGISTRO DE CLIENTES:"<<endl;
            usuarios<<endl;
            usuarios.close();
        }
        
        usuarios.open("sign_in.txt",ios::app);
        usuarios<<"Nombre: "<<" Fecha de registro: "<<endl;
        usuarios<<name<<"   "<<dt<<endl;
        usuarios.close();
    }
//FUNCIONES DE MODIFICACION DE ARCHIVOS
//DATOS DE INICIO
    void menu_ingresos(){
        cout<<"Nombre: ";cin>>name;cout<<endl;
        cout<<"Edad: ";cin>>ag;cout<<endl;
        cout<<"Peso: ";cin>>wt;cout<<endl;
        cout<<"Estatura: ";cin>>ht;cout<<endl;
        cout<<"Sexo: ";cin>>sx;cout<<endl;
    
//ARCHIVOS DE LECTURA
    ofstream a_log(name+".txt");
    if(a_log.is_open()){
        a_log<<"Archivo de "<<name<<endl;
        a_log<<"Fecha de registro: "<<dt<<endl;
        a_log<<"Edad: "<<ag<<endl;
        a_log<<"Peso: "<<wt<<endl;
        a_log<<"Estatura: "<<ht<<endl;
        a_log<<"Sexo: "<<sx<<endl;
        a_log<<endl;
    a_log.close();
    }
//ARCHIVOS AUXILIARES (PARA CALCULOS)
    ofstream auxlog("aux"+name+".txt");
        auxlog<<ag<<endl;
        auxlog<<sx<<endl;
        auxlog<<wt<<endl;
        auxlog<<ht<<endl;
    auxlog.close();
    }
//DATOS NORMALES
    void menu_sesion(){
        cout<<"usuario:"<<endl;
        cin>>name;
        int i=0;
        string line;
        
        cout<<"Bienvenido/a a la sesión de:"<<name<<endl;
        cout<<"Registro de consumo de nutrientes de el día: "<<endl;
        cout<<"Calorias:";cin>>calo;cout<<endl;
        cout<<"Proteinas: ";cin>>prot;cout<<endl;
        cout<<"Calcio: ";cin>>calc;cout<<endl;
        cout<<"Vitamina A: ";cin>>A;cout<<endl;
        cout<<"Vitamina C: ";cin>>C;cout<<endl;
        ifstream auxlog("aux"+name+".txt");
        if(auxlog.is_open()){
            while(getline(auxlog,line)){
                auxt[i]=line;
                i++;
            }
            if(auxlog.eof()){
                cout<<"Success data"<<endl;
            }
            auxlog.close();
        }
        ofstream a_log;
        a_log.open(name+".txt",ios::app);
            a_log<<"Record de consumo de nutrientes, sesion "<<dt<<endl;
            a_log<<endl;
            a_log<<"Calorias: "<<prot<<endl;
            a_log<<"Proteinas: "<<prot<<endl;
            a_log<<"Calcio: "<<calc<<endl;
            a_log<<"Vitamina A: "<<A<<endl;
            a_log<<"Vitamina C: "<<C<<endl;
        a_log.close();
            
}

//FUNCIONES DE RANGO

    


//FUNCIONES DE OPCION MACULINO:
    //FUNCION CALORIA DE M
        
       void mas_calo(){
            if(ag>=2 && ag<=3){
                if(calo>=800 && calo<=1200){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<800){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calo>1200){
                cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=8){
                if(calo>=1200 && calo<=1400){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<1200){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calo>1400){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>8 && ag<=13){
                if(calo>=1600 && calo<=2000){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<1600){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calo>2000){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>13 && ag<=18){
                if(calo>=2000 && calo<2400){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<2000){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calo>2400){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=30){
                if(calo>=2400 && calo<=2600){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<2400){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calo>2600){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>30 && ag<=50){
                if(calo>=2200 && calo<=2400){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<2200){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calo>2400){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }

    //FUNCION PROTEINA DE M
        void mas_prot(){
            if(ag>=1 && ag<=3){
                if(prot>=400 && prot<=500){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<400){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(prot>500){
                cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(prot>=750 && prot<=850){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(prot>=750 && prot<=850){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(prot>=590 && prot<690){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(prot>=590 && prot<=690){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=50){
                if(prot>=500 && prot<=600){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<500){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(prot>600){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION CALCIO DE M
        void mas_calc(){
            if(ag>=1 && ag<=3){
                if(calc>=400 && calc<=500){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<400){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calc>500){
                cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(calc>=750 && calc<=850){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(calc>=750 && calc<=850){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(calc>=1100 && calc<1200){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(calc>=1100 && calc<=1200){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(calc>=950 && calc<=1050){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<950){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calc>1050){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION VIT. A DE M
        void mas_A(){
            if(ag>=1 && ag<=3){
                if(A>=200 && A<=300){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<200){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(A>300){
                cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(A>=250 && A<=350){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<250){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(A>350){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(A>=350 && A<=450){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<350){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(A>450){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(A>=550 && A<650){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<550){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(A>650){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(A>=700 && A<=800){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<700){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(A>800){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(A>=600 && A<=700){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<600){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(A>700){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }


    //FUNCION VIT. C DE M
        void mas_c(){
            if(ag>=1 && ag<=3){
                if(C>=17 && C<=23){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<17){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(C>23){
                cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(C>=27 && C<=33){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<27){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(C>33){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(C>=42 && C<=47){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<42){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(C>47){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(C>=67 && C<73){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<67){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(C>73){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(C>=87 && C<=93){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<87){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(C>93){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(C>=107 && C<=113){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<107){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(C>113){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }

//FUNCIONES DE OPCION FEMENINO:
    //FUNCION CALORIA DE F
        
       void fem_calo(){
            if(ag>=1 && ag<=3){
                if(calo>=800 && calo<=1200){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<800){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calo>1200){
                cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=8){
                if(calo>=1200 && calo<=1400){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<1200){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calo>1400){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>8 && ag<=13){
                if(calo>=1400 && calo<=1600){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<1400){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calo>1600){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>13 && ag<=18){
                if(calo>=1600 && calo<2000){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<1600){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calo>2000){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=30){
                if(calo>=2000 && calo<=2200){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<2000){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calo>2200){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>30 && ag<=50){
                if(calo>=1800 && calo<=2000){
                    cout<<"Está en el rango optimo de calorias: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calorias: "<<endl;
                    a_log.close();
                }else
                if(calo<1800){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calo>2000){
                    cout<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calorias de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }

    //FUNCION PROTEINA DE F
        void fem_prot(){
            if(ag>=1 && ag<=3){
                if(prot>=400 && prot<=500){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<400){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(prot>500){
                cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(prot>=750 && prot<=850){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(prot>=750 && prot<=850){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(prot>=590 && prot<690){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(prot>=590 && prot<=690){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=50){
                if(prot>=500 && prot<=600){
                    cout<<"Está en el rango optimo de proteinas: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de proteinas: "<<endl;
                    a_log.close();
                }else
                if(prot<500){
                    cout<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calorías de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(prot>600){
                    cout<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas proteinas de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION CALCIO DE F
        void fem_calc(){
            if(ag>=1 && ag<=3){
                if(calc>=400 && calc<=500){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<400){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calc>500){
                cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(calc>=750 && calc<=850){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(calc>=750 && calc<=850){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(calc>=1100 && calc<1200){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(calc>=1100 && calc<=1200){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(calc>=950 && calc<=1050){
                    cout<<"Está en el rango optimo de calcio: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de calcio: "<<endl;
                    a_log.close();
                }else
                if(calc<950){
                    cout<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos calcio de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(calc>1050){
                    cout<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas calcio de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION VIT. A DE F
        void fem_A(){
            if(ag>=1 && ag<=3){
                if(A>=200 && A<=300){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<200){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(A>300){
                cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(A>=250 && A<=350){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<250){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(A>350){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(A>=350 && A<=450){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<350){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(A>450){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(A>=550 && A<650){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<550){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(A>650){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(A>=600 && A<=700){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<600){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(A>700){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(A>=600 && A<=700){
                    cout<<"Está en el rango optimo de vitamina A: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina A: "<<endl;
                    a_log.close();
                }else
                if(A<600){
                    cout<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(A>700){
                    cout<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina A de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }


    //FUNCION VIT. C DE F 
        void fem_c(){
            if(ag>=1 && ag<=3){
                if(C>=17 && C<=23){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<17){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(C>23){
                cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(C>=27 && C<=33){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<27){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(C>33){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(C>=42 && C<=47){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<42){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(C>47){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(C>=67 && C<73){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<67){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(C>73){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(C>=97 && C<=103){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<97){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera:"<<endl;
                    a_log.close();
                }else
                if(C>103){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(C>=90 && C<=95){
                    cout<<"Está en el rango optimo de vitamina C: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está en el rango optimo de vitamina C: "<<endl;
                    a_log.close();
                }else
                if(C<90){
                    cout<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo menos vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                }else
                if(C>95){
                    cout<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Está consumiendo mas vitamina C de lo que debiera: "<<endl;
                    a_log.close();
                    }
                }
            }

void MoF(){
        stringstream age(auxt[0]);//SE USA CON PARAMETROS DE EDAD DE RANGOS DE NUTRIENTES
        age>>ag;
        stringstream hei(auxt[3]);
        hei>>ht;
        stringstream wei(auxt[2]);
        wei>>wt;
        strcpy(sx,auxt[1].c_str());
        switch (sx[0]){
            case 'F':
                mas_calo();
                mas_prot();
                mas_calc();
                mas_A();
                mas_c();
                break;
            case 'M':
                fem_calo();
                fem_prot();
                fem_calc();
                fem_A();
                fem_c();
                break;
        }
    }

int main(){
    int ans=0;

    cout<<"Bienvenido a programa de nitricion de un mes: "<<endl;
    cout<<"Ingrese opción"<<endl;
    cout<<"1. Registrar cliente."<<endl;
    cout<<"2. Modificar Registro existente"<<endl;
    cin>>ans;

    switch(ans){
        case 1:
            menu_ingresos();
            p_registros();
            menu_sesion();
            MoF();
            break;
        case 2:
            menu_sesion();
            MoF();
        break;
        }  
    return 0;
    }
