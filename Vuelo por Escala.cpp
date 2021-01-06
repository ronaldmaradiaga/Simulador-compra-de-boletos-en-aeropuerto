#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
using namespace std;

int welcome(){
	
	for(int i=0;i<1;i++){
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"            ################################################################################################"<<endl;
	cout<<"          ##                                                                                                ##"<<endl;
	cout<<"          ##                              Bienvenido a Aerolinea Honduras Airlines                          ##"<<endl;
	cout<<"          ##                                                                                                ##"<<endl;
    cout<<"            ################################################################################################"<<endl;
Sleep(3000);
}
}


int main(){
    setlocale(LC_ALL, "spanish");   
	system("color 1e");
	int num,destino,edad,co=0,c=0;
	float cantidad,subtotal,isv,descuento,descuento3=0,descuentof,total;
	char nombre[50];
	string decision,ac;
	int years[num];
	float totales[num],ttt[num];
	int laceiba=0,tela=0,trujillo=0,roatan=0,sps=0,clientes=0,cuantos=0;
	string pasajeros[num];
	float total_isv=0,total_descuento=0,total_final=0;
   	 string no1,r;
   	 //Nueva Acumuladora
   	 float t=0,t1=0,s,isv2,q,k,g,des2,j,eda,tr,td3,	total_descuent=0;
welcome();
system("cls");
	cout<<"Cuantos Pasajeros Desea Atender Hoy?"<<endl;
	cin>>num;
	cout<<""<<endl;
	system("cls");
	for(int i=0;i<num;i++){
		cout<<"(S/Si) o (N/No).  Cliente #"<<cuantos+1<<endl;
		cout<<"Desea Registrarse?"<<endl;
		cin>>decision;
		system("cls");
	    if(decision=="s" || decision=="S" || decision=="si" || decision=="Si" ){
		cout<<"\n";
	   		cout<<"********************************************************************************"<<endl;
	        cout<<"** Escala ** Destino de Escala ** Valor de Descuento **    Precio de Vuelo    **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    1   **      La Ceiba     **        8.5%        **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    2   **        Tela       **        11.5%       **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    3   **        SPS        **        10%         **         400 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    4   **      Trujillo     **        15%         **         200 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    5   **       Roatan      **        13%         **         600 Lps.      **"<<endl;
        	cout<<"********************************************************************************"<<endl; 
            cout<<"\n";
            cout<<"En que Escala le gustaria Viajar: "<<endl;
            cin>>destino;
            cout<<""<<endl;
            system("Cls");
	       if(destino==1){
	       	cout<<"Ha Seleccionado La Escala 1 con Destino a La Ceiba"<<endl;
	       	cout<<""<<endl;
	       cin.ignore();
	       cout<<"Cual Es Su Nombre? "<<endl;
	       cin.getline(nombre,50);   
	       cout<<"Que edad Tiene?"<<endl;
	       cin>>edad;
	       cin.ignore();
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
    	}
    	    descuento=subtotal*8.5/100;
        	descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    laceiba++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 1"<<endl;
    	    cout<<"Destino: La Ceiba"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps."<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<"\n"<<endl;
    	    t1=total;
			q=isv;
			j=descuento;
			tr=descuento3;
    	    cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
    	    while(r=="s" || r=="S" || r=="si" || r=="Si"){
    	    system("cls");
			cout<<"\n";
	   		cout<<"********************************************************************************"<<endl;
	        cout<<"** Escala ** Destino de Escala ** Valor de Descuento **    Precio de Vuelo    **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    1   **      La Ceiba     **        8.5%        **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    2   **        Tela       **        11.5%       **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    3   **        SPS        **        10%         **         400 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    4   **      Trujillo     **        15%         **         200 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    5   **       Roatan      **        13%         **         600 Lps.      **"<<endl;
        	cout<<"********************************************************************************"<<endl; 
            cout<<"\n";
            cout<<"En que Escala le gustaria comprar el Boleto: "<<endl;
            cin>>destino;
            system("cls");
            if(destino==1){
            cout<<"Ha Seleccionado La Escala 1 con Destino a La Ceiba"<<endl;
			cout<<""<<endl;	
			laceiba++;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
    	}
    	    descuento=subtotal*8.5/100;
        	descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 1"<<endl;
    	    cout<<"Destino: La Ceiba"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps."<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<"\n"<<endl;
			}else
			if(destino==2){
			cout<<"Ha Seleccionado La Escala 2 con Destino a Tela"<<endl;
	       	cout<<""<<endl;	
			cout<<""<<endl;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	   isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/subtotal;
            }
    	    descuento=subtotal*11.5/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    tela++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 2"<<endl;
    	    cout<<"Destino: Tela"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==3){
	       	cout<<"Ha Seleccionado La Escala 3 con Destino a San Pedro Sula"<<endl;
	       	cout<<""<<endl;
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 400;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*10/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    sps++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 3"<<endl;
    	    cout<<"Destino: San Pedro Sula"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==4){
	       	cout<<"Ha Seleccionado La Escala 4 con Destino a Trujillo"<<endl;
	       	cout<<""<<endl;
	       	 cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 200;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*15/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    trujillo++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 4"<<endl;
    	    cout<<"Destino: Trujillo"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
			cout<<""<<endl;
		}else
		 if(destino==5){
	       	cout<<"Ha Seleccionado La Escala 5 con Destino a Roatan"<<endl;
	       	cout<<""<<endl;
	       	cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 600;
    	    isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*13/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    roatan++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 5"<<endl;
    	    cout<<"Destino: Roatan"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
		    cout<<""<<endl;
	       }else{
	       	cout<<"Lo sentimos pero esta Escala no existe "<<endl;
		   }
		   c++;
  		    des2=descuento+des2;
		    isv2=isv+isv2;
             t=total+t;
            td3=descuento3+td3;
			cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
			s=t+t1;
			k=isv2+q;
			g=des2+j;
			eda=td3+tr;
			if(r=="n"){
            cout<<""<<endl;
            cout<<"####################################################"<<endl;
            cout<<"##             Datos Generales Extras             ##"<<endl;
            cout<<"####################################################"<<endl;
			cout<<""<<endl;
			cout<<"Su Impuesto es: "<<k<<" Lps."<<endl;
			cout<<"Su Descuento es: "<<g<<" Lps."<<endl;
			cout<<"Su Descuento de Tercera Edad Es: "<<eda<<" Lps."<<endl;
			cout<<"El total es:"<<s<<" Lps."<<endl;
			cout<<""<<endl;
			}
    	}
    	    cout<<""<<endl;
		    system("pause");
   	        system("Cls");
		   }else
		    if(destino==2){
	       	cout<<"Ha Seleccionado La Escala 2 con Destino a Tela"<<endl;
	       	cout<<""<<endl;
	       cin.ignore();
	       cout<<"Cual Es Su Nombre? "<<endl;
	       cin.getline(nombre,50);   
	       cout<<"Que edad Tiene?"<<endl;
	       cin>>edad;
	       cin.ignore();
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	   isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/subtotal;
            }
    	    descuento=subtotal*11.5/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    tela++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 2"<<endl;
    	    cout<<"Destino: Tela"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
    	   	t1=total;
			q=isv;
			j=descuento;
			tr=descuento3;
    	    cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
    	    while(r=="s" || r=="S" || r=="si" || r=="Si"){
    	    system("cls");
			cout<<"\n";
	   		cout<<"********************************************************************************"<<endl;
	        cout<<"** Escala ** Destino de Escala ** Valor de Descuento **    Precio de Vuelo    **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    1   **      La Ceiba     **        8.5%        **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    2   **        Tela       **        11.5%       **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    3   **        SPS        **        10%         **         400 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    4   **      Trujillo     **        15%         **         200 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    5   **       Roatan      **        13%         **         600 Lps.      **"<<endl;
        	cout<<"********************************************************************************"<<endl; 
            cout<<"\n";
            cout<<"En que Escala le gustaria comprar el Boleto: "<<endl;
            cin>>destino;
            system("cls");
            if(destino==1){
            cout<<"Ha Seleccionado La Escala 1 con Destino a La Ceiba"<<endl;
			cout<<""<<endl;	
			laceiba++;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
    	}
    	    descuento=subtotal*8.5/100;
        	descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 1"<<endl;
    	    cout<<"Destino: La Ceiba"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps."<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<"\n"<<endl;
			}else
			if(destino==2){
			cout<<"Ha Seleccionado La Escala 2 con Destino a Tela"<<endl;
	       	cout<<""<<endl;	
			cout<<""<<endl;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	   isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/subtotal;
            }
    	    descuento=subtotal*11.5/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    tela++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 2"<<endl;
    	    cout<<"Destino: Tela"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==3){
	       	cout<<"Ha Seleccionado La Escala 3 con Destino a San Pedro Sula"<<endl;
	       	cout<<""<<endl;
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 400;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*10/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    sps++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 3"<<endl;
    	    cout<<"Destino: San Pedro Sula"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==4){
	       	cout<<"Ha Seleccionado La Escala 4 con Destino a Trujillo"<<endl;
	       	cout<<""<<endl;
	       	 cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 200;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*15/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    trujillo++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 4"<<endl;
    	    cout<<"Destino: Trujillo"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
			cout<<""<<endl;
		}else
		 if(destino==5){
	       	cout<<"Ha Seleccionado La Escala 5 con Destino a Roatan"<<endl;
	       	cout<<""<<endl;
	       	cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 600;
    	    isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*13/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    roatan++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 5"<<endl;
    	    cout<<"Destino: Roatan"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
		    cout<<""<<endl;
	       }else{
	       	cout<<"Lo sentimos pero esta Escala no existe "<<endl;
		   }
		  c++;
		   des2=descuento+des2;
		   isv2=isv+isv2;
            t=total+t;
            td3=descuento3+td3;
			cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
			s=t+t1;
			k=isv2+q;
			g=des2+j;
			eda=td3+tr;
			if(r=="n"){
            cout<<""<<endl;
            cout<<"####################################################"<<endl;
            cout<<"##             Datos Generales Extras             ##"<<endl;
            cout<<"####################################################"<<endl;
			cout<<""<<endl;
			cout<<"Su Impuesto es: "<<k<<" Lps."<<endl;
			cout<<"Su Descuento es: "<<g<<" Lps."<<endl;
			cout<<"Su Descuento de Tercera Edad Es: "<<eda<<" Lps."<<endl;
			cout<<"El total es:"<<s<<" Lps."<<endl;
			cout<<""<<endl;
			}
    	    
    	}
		    system("pause");
   	        system("Cls");
		   }else
		    if(destino==3){
	       	cout<<"Ha Seleccionado La Escala 3 con Destino a San Pedro Sula"<<endl;
	       	cout<<""<<endl;
	       cin.ignore();
	       cout<<"Cual Es Su Nombre? "<<endl;
	       cin.getline(nombre,50);   
	       cout<<"Que edad Tiene?"<<endl;
	       cin>>edad;
	       cin.ignore();
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 400;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*10/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    sps++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 3"<<endl;
    	    cout<<"Destino: San Pedro Sula"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
    	   	t1=total;
			q=isv;
			j=descuento;
			tr=descuento3;
    	    cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
    	    while(r=="s" || r=="S" || r=="si" || r=="Si"){
    	    system("cls");
			cout<<"\n";
	   		cout<<"********************************************************************************"<<endl;
	        cout<<"** Escala ** Destino de Escala ** Valor de Descuento **    Precio de Vuelo    **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    1   **      La Ceiba     **        8.5%        **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    2   **        Tela       **        11.5%       **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    3   **        SPS        **        10%         **         400 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    4   **      Trujillo     **        15%         **         200 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    5   **       Roatan      **        13%         **         600 Lps.      **"<<endl;
        	cout<<"********************************************************************************"<<endl; 
            cout<<"\n";
            cout<<"En que Escala le gustaria comprar el Boleto: "<<endl;
            cin>>destino;
            system("cls");
            if(destino==1){
            cout<<"Ha Seleccionado La Escala 1 con Destino a La Ceiba"<<endl;
			cout<<""<<endl;	
			laceiba++;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
    	}
    	    descuento=subtotal*8.5/100;
        	descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 1"<<endl;
    	    cout<<"Destino: La Ceiba"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps."<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<"\n"<<endl;
			}else
			if(destino==2){
			cout<<"Ha Seleccionado La Escala 2 con Destino a Tela"<<endl;
	       	cout<<""<<endl;	
			cout<<""<<endl;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	   isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/subtotal;
            }
    	    descuento=subtotal*11.5/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    tela++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 2"<<endl;
    	    cout<<"Destino: Tela"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==3){
	       	cout<<"Ha Seleccionado La Escala 3 con Destino a San Pedro Sula"<<endl;
	       	cout<<""<<endl;
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 400;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*10/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    sps++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 3"<<endl;
    	    cout<<"Destino: San Pedro Sula"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==4){
	       	cout<<"Ha Seleccionado La Escala 4 con Destino a Trujillo"<<endl;
	       	cout<<""<<endl;
	       	 cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 200;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*15/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    trujillo++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 4"<<endl;
    	    cout<<"Destino: Trujillo"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
			cout<<""<<endl;
		}else
		 if(destino==5){
	       	cout<<"Ha Seleccionado La Escala 5 con Destino a Roatan"<<endl;
	       	cout<<""<<endl;
	       	cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 600;
    	    isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*13/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    roatan++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 5"<<endl;
    	    cout<<"Destino: Roatan"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
		    cout<<""<<endl;
	       }else{
	       	cout<<"Lo sentimos pero esta Escala no existe "<<endl;
		   }
		   c++;
		   des2=descuento+des2;
		   isv2=isv+isv2;
            t=total+t;
            td3=descuento3+td3;
			cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
			s=t+t1;
			k=isv2+q;
			g=des2+j;
			eda=td3+tr;
			if(r=="n"){
            cout<<""<<endl;
            cout<<"####################################################"<<endl;
            cout<<"##             Datos Generales Extras             ##"<<endl;
            cout<<"####################################################"<<endl;
			cout<<""<<endl;
			cout<<"Su Impuesto es: "<<k<<" Lps."<<endl;
			cout<<"Su Descuento es: "<<g<<" Lps."<<endl;
			cout<<"Su Descuento de Tercera Edad Es: "<<eda<<" Lps."<<endl;
			cout<<"El total es:"<<s<<" Lps."<<endl;
			cout<<""<<endl;
			}
    	}
		    system("pause");
   	        system("Cls");
		   }else
		   if(destino==4){
	       	cout<<"Ha Seleccionado La Escala 4 con Destino a Trujillo"<<endl;
	       	cout<<""<<endl;
	       cin.ignore();
	       cout<<"Cual Es Su Nombre? "<<endl;
	       cin.getline(nombre,50);   
	       cout<<"Que edad Tiene?"<<endl;
	       cin>>edad;
	       cin.ignore();
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 200;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*15/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    trujillo++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 4"<<endl;
    	    cout<<"Destino: Trujillo"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
			cout<<""<<endl;
			t1=total;
			q=isv;
			j=descuento;
			tr=descuento3;
		    cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
    	    while(r=="s" || r=="S" || r=="si" || r=="Si"){
    	    system("cls");
			cout<<"\n";
	   		cout<<"********************************************************************************"<<endl;
	        cout<<"** Escala ** Destino de Escala ** Valor de Descuento **    Precio de Vuelo    **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    1   **      La Ceiba     **        8.5%        **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    2   **        Tela       **        11.5%       **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    3   **        SPS        **        10%         **         400 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    4   **      Trujillo     **        15%         **         200 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    5   **       Roatan      **        13%         **         600 Lps.      **"<<endl;
        	cout<<"********************************************************************************"<<endl; 
            cout<<"\n";
            cout<<"En que Escala le gustaria comprar el Boleto: "<<endl;
            cin>>destino;
            system("cls");
            if(destino==1){
            cout<<"Ha Seleccionado La Escala 1 con Destino a La Ceiba"<<endl;
			cout<<""<<endl;	
			laceiba++;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
    	}
    	    descuento=subtotal*8.5/100;
        	descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 1"<<endl;
    	    cout<<"Destino: La Ceiba"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps."<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<"\n"<<endl;
			}else
			if(destino==2){
			cout<<"Ha Seleccionado La Escala 2 con Destino a Tela"<<endl;
	       	cout<<""<<endl;	
			cout<<""<<endl;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	   isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/subtotal;
            }
    	    descuento=subtotal*11.5/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    tela++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 2"<<endl;
    	    cout<<"Destino: Tela"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==3){
	       	cout<<"Ha Seleccionado La Escala 3 con Destino a San Pedro Sula"<<endl;
	       	cout<<""<<endl;
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 400;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*10/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    sps++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 3"<<endl;
    	    cout<<"Destino: San Pedro Sula"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==4){
	       	cout<<"Ha Seleccionado La Escala 4 con Destino a Trujillo"<<endl;
	       	cout<<""<<endl;
	       	 cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 200;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*15/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    trujillo++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 4"<<endl;
    	    cout<<"Destino: Trujillo"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
			cout<<""<<endl;  	
		}else
		 if(destino==5){
	       	cout<<"Ha Seleccionado La Escala 5 con Destino a Roatan"<<endl;
	       	cout<<""<<endl;
	       	cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 600;
    	    isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*13/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    roatan++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 5"<<endl;
    	    cout<<"Destino: Roatan"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
		    cout<<""<<endl;
	       }else{
	       	cout<<"Lo sentimos pero esta Escala no existe "<<endl;
		   }
		    c++;
   		   des2=descuento+des2;
		   isv2=isv+isv2;
            t=total+t;
            td3=descuento3+td3;
			cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
			s=t+t1;
			k=isv2+q;
			g=des2+j;
			eda=td3+tr;
			if(r=="n"){
            cout<<""<<endl;
            cout<<"####################################################"<<endl;
            cout<<"##             Datos Generales Extras             ##"<<endl;
            cout<<"####################################################"<<endl;
			cout<<""<<endl;
			cout<<"Su Impuesto es: "<<k<<" Lps."<<endl;
			cout<<"Su Descuento es: "<<g<<" Lps."<<endl;
			cout<<"Su Descuento de Tercera Edad Es: "<<eda<<" Lps."<<endl;
			cout<<"El total es:"<<s<<" Lps."<<endl;
			cout<<""<<endl;
			}
    	}
		    system("pause");
   	        system("Cls");
		   }else
		    if(destino==5){
	       	cout<<"Ha Seleccionado La Escala 5 con Destino a Roatan"<<endl;
	       	cout<<""<<endl;
	       cin.ignore();
	       cout<<"Cual Es Su Nombre? "<<endl;
	       cin.getline(nombre,50);   
	       cout<<"Que edad Tiene?"<<endl;
	       cin>>edad;
	       cin.ignore();
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 600;
    	    isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*13/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    roatan++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 5"<<endl;
    	    cout<<"Destino: Roatan"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
		    cout<<""<<endl;
		    t1=total;
		    q=isv;
		    j=descuento;
		    tr=descuento3;
		    cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
    	    while(r=="s" || r=="S" || r=="si" || r=="Si"){
    	    system("cls");
			cout<<"\n";
	   		cout<<"********************************************************************************"<<endl;
	        cout<<"** Escala ** Destino de Escala ** Valor de Descuento **    Precio de Vuelo    **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    1   **      La Ceiba     **        8.5%        **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    2   **        Tela       **        11.5%       **         300 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    3   **        SPS        **        10%         **         400 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    4   **      Trujillo     **        15%         **         200 Lps.      **"<<endl;
	        cout<<"********************************************************************************"<<endl;
	        cout<<"**    5   **       Roatan      **        13%         **         600 Lps.      **"<<endl;
        	cout<<"********************************************************************************"<<endl; 
            cout<<"\n";
            cout<<"En que Escala le gustaria comprar el Boleto: "<<endl;
            cin>>destino;
            system("cls");
            if(destino==1){
            cout<<"Ha Seleccionado La Escala 1 con Destino a La Ceiba"<<endl;
			cout<<""<<endl;	
			laceiba++;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
    	}
    	    descuento=subtotal*8.5/100;
        	descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 1"<<endl;
    	    cout<<"Destino: La Ceiba"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps."<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<"\n"<<endl;
			}else
			if(destino==2){
			cout<<"Ha Seleccionado La Escala 2 con Destino a Tela"<<endl;
	       	cout<<""<<endl;	
			cout<<""<<endl;
			cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 300;
    	   isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/subtotal;
            }
    	    descuento=subtotal*11.5/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    tela++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 2"<<endl;
    	    cout<<"Destino: Tela"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==3){
	       	cout<<"Ha Seleccionado La Escala 3 con Destino a San Pedro Sula"<<endl;
	       	cout<<""<<endl;
	        cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 400;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*10/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    sps++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 3"<<endl;
    	    cout<<"Destino: San Pedro Sula"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
    	    cout<<""<<endl;
			}else
			if(destino==4){
	       	cout<<"Ha Seleccionado La Escala 4 con Destino a Trujillo"<<endl;
	       	cout<<""<<endl;
	       	 cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 200;
    	     isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*15/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    trujillo++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 4"<<endl;
    	    cout<<"Destino: Trujillo"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
			cout<<""<<endl; 	
		}else
		 if(destino==5){
	       	cout<<"Ha Seleccionado La Escala 5 con Destino a Roatan"<<endl;
	       	cout<<""<<endl;
	       	cout<<"Cuantos Boletos desea Comprar?"<<endl;
    	    cin>>cantidad;
    	    subtotal=cantidad * 600;
    	    isv=subtotal*12/100;
    	    if(edad>=65){
    	    descuento3=subtotal*25/100;
            }
    	    descuento=subtotal*13/100;
    	    descuentof=descuento+descuento3;
    	    total=(subtotal-descuentof)+isv;
    	    cout<<""<<endl;
    	    roatan++;
    	    system("Cls");
    	    cout<<"########################################################"<<endl;
    	    cout<<"##                         Factura                    ##"<<endl;
    	    cout<<"########################################################"<<endl;
    	    cout<<"Pasajero: "<<nombre<<endl;
    	    cout<<"Edad de Pasajero: "<<edad<<" Años "<<endl;
    	    cout<<"Escala: 5"<<endl;
    	    cout<<"Destino: Roatan"<<endl;
    	    cout<<"Su Subtotal Es: "<<subtotal<<" Lps."<<endl;
    	    cout<<"Su ISV Es: "<<isv<<" Lps."<<endl;
    	    cout<<"Descuento de Tercera Edad: "<<descuento3<<" Lps. "<<endl;
    	    cout<<"Su Descuento Es: "<<descuento<<" Lps. "<<endl;
    	    cout<<"El Total a pagar Es: "<<total<<" Lps. "<<endl;
		    cout<<""<<endl;
	       }else{
	       	cout<<"Lo sentimos pero esta Escala no existe "<<endl;
		   }
		   des2=descuento+des2;
		   isv2=isv+isv2;
            t=total+t;
            td3=descuento3+td3;
			cout<<"Desea Comprar otro Boleto?"<<endl;
    	    cin>>r;
			s=t+t1;
			k=isv2+q;
			g=des2+j;
			eda=td3+tr;
			if(r=="n"){
            cout<<""<<endl;
            cout<<"####################################################"<<endl;
            cout<<"##             Datos Generales Extras             ##"<<endl;
            cout<<"####################################################"<<endl;
			cout<<""<<endl;
			cout<<"Su Impuesto es: "<<k<<" Lps."<<endl;
			cout<<"Su Descuento es: "<<g<<" Lps."<<endl;
			cout<<"Su Descuento de Tercera Edad Es: "<<eda<<" Lps."<<endl;
			cout<<"El total es:"<<s<<" Lps."<<endl;
			cout<<""<<endl;
			}
		c++;
    	}
		    system("pause");
   	        system("Cls");
		   }else{
		   	cout<<"Lo sentimos pero esta Escala no existe "<<endl;
		   }
ttt[i]=s;
clientes++;   
years[i]=edad;
if(c==0){
	total_descuent=tr+total_descuent;
}else{
	total_descuent=eda+tr+total_descuent-tr;	
}


if(c==0){
total_isv=isv+total_isv;
}else{
total_isv=k+q+total_isv-q;	
}
if(c==0){
total_descuento=descuento+total_descuento;
}else{
total_descuento=g+j+total_descuento-j;
}
if(c==0){
total_final=t1+total_final;
}else{
	total_final=s+t1+total_final-t1;
}
		   }	
	co++;
	no1=nombre;		
	cuantos++;	
	if(c==0){
    totales[i]=t1;
    if(t1=0){
    	totales[i]=0;
	}
	}else
	if(c>0){
	totales[i]=ttt[i];

}
}
string nam1[co]=no1;
system("Color 1e");
	cout<<"##############################################################################"<<endl;
	cout<<"##                                                                          ##"<<endl;
	cout<<"##              Datos Generales de la Aerolinea Honduras Airlines           ##"<<endl;
	cout<<"##                                                                          ##"<<endl;
	cout<<"##############################################################################"<<endl;
	cout<<""<<endl;
	cout<<"##############################################################################"<<endl;
    cout<<"##                   Numero de clientes atendidos por Escala                ##"<<endl;
    cout<<"##############################################################################"<<endl;
	cout<<"Numero de clientes Registrados en la Escala 1 a La Ceiba: "<<laceiba++<<endl;
	cout<<"Numero de clientes Registrados en la Escala 2 a Tela: "<<tela++<<endl;
	cout<<"Numero de clientes Registrados en la Escala 3 a San Pedro Sula: "<<sps++<<endl;
	cout<<"Numero de clientes Registrados en la Escala 4 a Trujillo: "<<trujillo++<<endl;
	cout<<"Numero de clientes Registrados en la Escala 5 a Roatan: "<<roatan++<<endl;
	cout<<"Total de Clientes Registrados: "<<clientes++<<endl;
	cout<<"##############################################################################"<<endl;
    cout<<"##                     	   Datos Financieros Generales                     ##"<<endl;
    cout<<"##############################################################################"<<endl;
    cout<<"Total General de ISV: "<<total_isv<<" Lps."<<endl;
    cout<<"Total General de Descuentos: "<<total_descuento<<" Lps."<<endl;
    cout<<"Total General de Descuentos en la 3 edad: "<<total_descuent<<" Lps."<<endl;
    cout<<"Total General de Ganancias: "<<total_final<<" Lps."<<endl;
    cout<<"##############################################################################"<<endl;
    cout<<"##                 Totales de todos lo clientes Registrados                 ##"<<endl;
    cout<<"##############################################################################"<<endl;
    for(int i=0;i<co;i++){
    	cout<<"Cliente Numero:"<<i+1<<" "<<"Total Neto:"<<totales[i]-totales[i]+totales[i]-totales[i]+totales[i]<<" Lps."<<endl;    
	}
	getch();
	return 0;
}
