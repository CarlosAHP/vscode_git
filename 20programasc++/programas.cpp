#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;

int op, menu;
int opc1(), opc2(), opc3(), opc4(), opc5(), opc6(), opc7(), opc8(), opc9(), opc10(), opc11(), opc12(), opc13(), opc14(), opc15(), opc16(), opc17(), opc18(), opc19(), opc20();

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
	}


int main()
{
    do{
        	system("cls");
			cout<<"\t\t PROGRAMAS EN C++"<<endl;
	
		cout<<"1) Suma, Resta, Multipliacion y Division de dos numeros"<<endl;
		cout<<"2) Determinar si un numero es par o impar"<<endl;
		cout<<"3) Convertir de Kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
		cout<<"4) Determinar si una palabra o un numero es palindromo"<<endl;
		cout<<"5) Conversion de numero arabigos o romanos (minimo 1000)"<<endl;
		cout<<"6) Conversion de numeros enteros a letras"<<endl;
		cout<<"7) Conversion de numeros enteros con decimal a letras"<<endl;
		cout<<"8) Una tabla de multiplicar"<<endl;
		cout<<"9) Todas las tablas de multiplicar del 1 al 10"<<endl;
		cout<<"10) Multiplicacion manual"<<endl;
		cout<<"11) Conversion de numeros decimales a binarios"<<endl;
		cout<<"12) Conversion de numeros decimales a hexadecimales"<<endl;
		cout<<"13) Figuras Geometricas"<<endl;
		cout<<"14) Mover un punto en toda la pantalla"<<endl;
		cout<<"15) Simulacion de un cajero automatico"<<endl;
		cout<<"16) Calcular la hipotenusa"<<endl;
		cout<<"17) Convertir kilogramos a unidades de medida de masa"<<endl;
		cout<<"18) calculadora científica de 25 funciones."<<endl;
		cout<<"19) correspondencia de un numero introducido  "<<endl;
		cout<<"20) calcular el valor de los numeros "<<endl;
		cout<<"21) salir del programa"<<endl<<endl<<endl;
		cout<<"\n Seleccione una opcion: ";
		cin>>op;

       switch (op)
       {
            case 1:
                system("cls");
                opc1();
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            case 2:
                system("cls");
                opc2();
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            break;

            case 3:
                system("cls");
                opc3();
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;

            case 4:
                system("cls");
                opc4();
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 5:
                system("cls");
                opc5();
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;

            case 6:
                system("cls");
                opc6();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 7:
                system("cls");
                opc7();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 8:
                system("cls");
                opc8();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 9:
                system("cls");
                opc9();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break; 

            case 10:
                system("cls");
                opc10();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 11:
                system("cls");
                opc11();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;

            
            case 12:
                system("cls");
                opc12();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 13:
                system("cls");
                opc13();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;

            case 14: 
                system("cls");
                opc14();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 15:
                system("cls");
                opc15();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 16:
                system("cls");
                opc16();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;

            case 17:
                system("cls");
                opc17();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;  

            case 18:
                system("cls");
                opc18();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 19:
                system("cls");
                opc19();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;
            
            case 20:  
                system("cls");
                opc20();
                cout<<endl;
                cout<<"precione una tecla para regresar al menu";
                getch();
                break;

    }
    }while(op!=21);


    return 0;
};






int opc1()
{
    int n1, n2,suma = 0, resta, mutiplicacion = 0, division = 0;
    cout<<"ingrese numero 1:  ";
    cin>>n1;
    cout<<"ingrese numero 2:  ";
    cin>>n2;

    suma = n1+n2;
    resta = n1-n2;
    mutiplicacion = n1*n2;
    division = n1 / n2;

    cout<<"\n la suma es: " <<suma<<endl;
        cout<<"\n la resta es : " <<resta<<endl;
        cout<<"\n la multiplicion es : " <<mutiplicacion<<endl;
        cout<<"\n la divisiones : " <<division<<endl;
        cout<<"\n";
}

int opc2()
{
    int numero;

    cout<<"ingrese un numero:  ";
    cin>>numero;

    if (numero == 0)
    {
        cout<<"resultado: el numero no es par ni impar es 0"<<endl;
    }
    else if (numero % 2==0)
    {
        cout<<" resultado: el numero es par"<<endl;
    }
    else{
        cout<<"resultado:  el numero es impar "<<endl;
    }
    
}


int opc3()
{
    int op;
    float kilometros, millas, metros, pulgadas, libras, kilos;

 cout<<"CONVERSOR DE UNIDADES "<<endl;
 cout<<"Elija que conversion desea realizar"<<endl;
        
        cout<<"1, kilometros a millas"<<endl;
        cout<<"2, millas a kilometros"<<endl;
        cout<<"3, metros a pulgadas"<<endl;
        cout<<"4, pulgadas a metros"<<endl;
        cout<<"5, libras a kilos"<<endl;
        cout<<"6, kilos a libras"<<endl;

        cout<<"--------------- opcion=  ";
        cin>>op;
        
    switch (op)
    {
    case 1:
            cout<<"---kilometros a millas---"<<endl;
            cout<<"Ingrese la cantidad de kilometros a convertir: "<<endl;
            cin>>kilometros;
            millas = kilometros * 0.621371;
            cout<<kilometros<< " kilometros equivalena a "<<millas<<" millas..."<<endl<<endl;

        break;

        case 2:
            cout<<"---millas a kilometros---"<<endl;
            cout<<"Ingrese la cantidad de millas a convertir: "<<endl;
            cin>>millas;
            kilometros= millas * 1.60934;
            cout<<millas<< " millas equivalena a "<<kilometros<<" kilometros..."<<endl<<endl;

        break;

        case 3:
            cout<<"---metros a pulgadas---"<<endl;
             cout<<"Ingrese la cantidad de metros a convertir: "<<endl;
            cin>>metros;
            pulgadas= metros * 39.3701;
            cout<<metros<< " metros equivalena a "<<pulgadas<<" pulgadas..."<<endl<<endl;

        break;

         case 4:
            cout<<"---pulgadas a metros---"<<endl;
            cout<<"Ingrese la cantidad de pulgadas a convertir: "<<endl;
            cin>>pulgadas;
            metros= pulgadas * 0.0254;
            cout<<pulgadas<< " pulgadas equivalena a "<<metros<<" metros..."<<endl<<endl;
        break;

         case 5:
            cout<<"---libras a kilos---"<<endl;
            cout<<"Ingrese la cantidad de libras a convertir: "<<endl;
            cin>>libras;
            kilos= libras * 0.453592;
            cout<<libras<< " libras equivalena a "<<kilos<<" kilos..."<<endl<<endl;

        break;

         case 6:
            cout<<"---kilos a libras---"<<endl;
            cout<<"Ingrese la cantidad de kilos a convertir: "<<endl;
            cin>>kilos;
            libras = kilos * 2.20462;
            cout<<kilos<< " kilos equivalena a "<<libras<<" libras..."<<endl<<endl;
        break;

    default:

                cout<<"NO ES NINGUNA DE LAS OPCIONES"<<endl;

        break;
    }
};

int opc4()
{
    char cadena[100], copia[100];

cout<<"Ingrese palabra"<<endl;
cin>>cadena;

    for ( int i =(strlen(cadena)-1);i>=0;i--)
    {
        copia[strlen(cadena)-1-i]=cadena[i];
    }
    copia[strlen(cadena)]='\0';

    //equilibrio de las cadenas 

if (strcmp(cadena,copia)==0)
{
    cout<<"Es palindroma"<<endl;
}
else
{
    cout<<"la palabra no es palindroma"<<endl;
}

}

int opc5()
{

    int numero, unidades, decenas, centenas, millar;

    cout<<"Ingrese un numero:";
    cin>>numero;

    cout<<"el numero en romano es: ";

    unidades = numero%10; numero /=10;
    decenas = numero%10; numero /=10;
    centenas = numero%10; numero /=10;
    millar = numero%10; numero /=10;


    switch (millar)
    {
    case 1: 
    cout<<"M"; 
        break;

    case 2: 
    cout<<"MM"; 
        break;
    
    case 3: 
    cout<<"MMM"; 
        break;
    
    default:
        break;
    }

    switch (centenas)
    {
    case 1: 
    cout<<"C"; 
        break;

    case 2: 
    cout<<"CC"; 
        break;
    
    case 3: 
    cout<<"CCC"; 
        break;
    
    case 4: 
    cout<<"CD"; 
        break;

    case 5: 
    cout<<"D"; 
        break;
    
    case 6: 
    cout<<"DC"; 
        break;
    
    case 7: 
    cout<<"DCC"; 
        break;

    case 8: 
    cout<<"DCCC"; 
        break;
    
    case 9: 
    cout<<"CM"; 
        break;

    
    default:
        break;
    }


switch (decenas)
    {
    case 1: 
    cout<<"X"; 
        break;

    case 2: 
    cout<<"XX"; 
        break;
    
    case 3: 
    cout<<"XXX"; 
        break;
    
    case 4: 
    cout<<"XL"; 
        break;

    case 5: 
    cout<<"L"; 
        break;
    
    case 6: 
    cout<<"LX"; 
        break;
    
    case 7: 
    cout<<"LXX"; 
        break;

    case 8: 
    cout<<"LXXX"; 
        break;
    
    case 9: 
    cout<<"XC"; 
        break;

    
    default:
        break;
    }

switch (unidades)
    {
    case 1: 
    cout<<"I"; 
        break;

    case 2: 
    cout<<"II"; 
        break;
    
    case 3: 
    cout<<"III"; 
        break;
    
    case 4: 
    cout<<"IV"; 
        break;

    case 5: 
    cout<<"V"; 
        break;
    
    case 6: 
    cout<<"VI"; 
        break;
    
    case 7: 
    cout<<"VII"; 
        break;

    case 8: 
    cout<<"VIII"; 
        break;
    
    case 9: 
    cout<<"IX"; 
        break;

    };

    cout<<endl;

}

int opc6()
{
 
   int numero, n1, n2, n3, n4, n5;
   cout<<"Escribe un numero"; 
   cin>>numero;
   n1 = numero / 10000;
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);
 
   cout<<"\n"<<n1<<" -> Decenas de mil"<<endl;
   cout<<n2<<" -> Unidades de mil"<<endl;
   cout<<n3<<" -> Centenas"<<endl;
   cout<<n4<<" -> Decenas"<<endl;
   cout<<n5<<" -> Unidades \n"<<endl; 
   if(numero > 10000){

      cout<<"El numero ingresado excede el rango de valores";
   }else{
      if(n1 == 1){
      cout<<"Diez mil";
      }
      //Sentencia para determinar los miles
      if(n2 == 1){
         cout<<"MIL ";
      }else if(n2 == 2){
         cout<<"DOS MIL ";
      }else if(n2 == 3){
         cout<<"TRES MIL ";
      }else if(n2 == 4){
         cout<<"CUATRO MIL ";
      }else if(n2 == 5){
         cout<<"CINCO MIL ";
      }else if(n2 == 6){
        cout<<"SEIS MIL ";
      }else if(n2 == 7){
         cout<<"SIETE MIL ";
      }else if(n2 == 8){
         cout<<"OCHO MIL ";
      }else if(n2 == 9){
         cout<<"NUEVE MIL ";
      }
      //Setencia para determinar los cientos
      if(n3 == 1 && n4 == 0 && n5 == 0){
         cout<<"CIEN";
      }else if(n3 == 1){
         cout<<"CIENTO ";
      }else if(n3 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n3 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n3 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n3 == 5){
         cout<<"QUINIENTOS ";
      }else if(n3 == 6){
         cout<<"SEISCIENTOS ";
      }else if(n3 == 7){
         cout<<"SETECIENTOS ";
      }else if(n3 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n3 == 9){
         cout<<"NOVECIENTOS ";
      }
      //Setencia para determinar las decenas
      if(n4 == 1 && n5 == 0){
         cout<<"Diez";
      }else if(n4 == 1 && n5 == 1){
         cout<<"ONCE";
      }else if(n4 == 1 && n5 == 2){
         cout<<"DOCE";
      }else if(n4 == 1 && n5 == 3){
         cout<<"TRECE";
      }else if(n4 == 1 && n5 == 4){
         cout<<"CATORCE";
      }else if(n4 == 1 && n5 == 5){
         cout<<"QUINCE";
      }else if(n4 == 1){
         cout<<"DIECI";
      }
      if(n4 == 2 && n5 == 0){
         cout<<"VEINTE";
      }else if(n4 == 2){
         cout<<"VEINTI";
      }else if(n4 == 3 && n5 == 0){
         cout<<"TREINTA";
      }else if(n4 == 3){
         cout<<"TREINTA Y ";
      }else if(n4 == 4 && n5 == 0){
         cout<<"CUARENTA";
      }else if(n4 == 4){
         cout<<"CUARENTA Y ";
      }else if(n4 == 5 && n5 == 0){
         cout<<"CINCUENTA";
      }else if(n4 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n4 == 6 && n5 == 0){
         cout<<"SESENTA";
      }else if(n4 == 6){
         cout<<"SESENTA Y ";
      }else if(n4 == 7 && n5 == 0){
         cout<<"SETENTA";
      }else if(n4 == 7){
         cout<<"SETENTA Y ";
      }else if(n4 == 8 && n5 == 0){
         cout<<"OCHENTA";
      }else if(n4 == 8){
         cout<<"OCHENTA Y ";
      }else if(n4 == 9 && n5 == 0){
         cout<<"NOVENTA";
      }
      else if(n4 == 9){
         cout<<"NOVENTA Y ";
      }
      //Sentencia para determinar las unidades 
      if(n5 == 1 && n4 > 1){
         cout<<"UNO";
      }else if(n5 == 1 && n4 == 0){
         cout<<"UNO"; 
      }else if(n5 == 2 && n4 > 1){
         cout<<"DOS";
      }else if(n5 == 2 && n4 == 0){
         cout<<"DOS";
      }else if(n5 == 3 && n4 > 1){
         cout<<"TRES";
      }else if(n5 == 3 && n4 == 0){
         cout<<"TRES"; 
      }else if(n5 == 4 && n4 > 1){
         cout<<"CUATRO";
      }else if(n5 == 4 && n4 == 0){
         cout<<"CUATRO"; 
      }else if(n5 == 5 && n4 > 1){
         cout<<"CINCO";
      }else if(n5 == 5 && n4 == 0){
         cout<<"CINCO";
      }else if(n5 == 6){
         cout<<"SEIS";
      }else if(n5 == 7){
         cout<<"SIETE";
      }else if(n5 == 8){
         cout<<"OCHO";
      }else if(n5 == 9){
         cout<<"NUEVE";
      }
   }
}

int opc7() 
{

 double valor;
 int miles,cientos,unidades,decimales;

 char numeros[100][20] = 
 {
  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[10][20] = 
 {
  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 std::cout << "Introduzca numero a transcribir: ";
 std::cin >> valor;

 miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;
 decimales = ((int) (valor*100.0))%100 ;

 if (miles)
  std::cout << numeros[miles] << " mil ";
 
 if (cientos)
  std::cout << centenas[cientos] << " ";
 
 if (unidades) 
  std::cout << numeros[unidades];
 
 if (decimales)
 {
  if(miles || cientos || unidades)
  {
   std::cout << " con ";
  }
 
  std::cout << numeros[decimales] << " centimos.";
 }

 std::cout << std::endl;

}

int opc8()
{
    int number;
    cout<<"tabla de multiplicar :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }   
}

int opc9()
{
       int numero;
      do{
               cout<<"---INGRESE UN NUMERO DEL 1 AL 10---";
               cin>>numero;
       }while((numero<1) || (numero>10));
      for (int i=1; i<=10; i++){
      cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
       }

}

int opc10()
{
    int valor1, valor2, a, b, f1,f2, fn;

    cout<<"Ingrese valor 1"<<endl;
    cin>>valor1;
    cout<<"Ingrese valor 2"<<endl;
    cin>>valor2;

    cout<<"          "<<valor1<<endl;
    cout<<"         "<<"X"<<valor2<<endl;
    cout<<"          ""----"<<endl;

    if (valor2<99)
    {
        a=valor2%100/10;
        b = valor2%10/1;

        f1 = b*valor1;
        _sleep(1000);
        cout<<"           "<<f1<<endl;
         _sleep(1000);
         f2= a*valor1;
    cout<<"          "<<f2<<endl;
    cout<<"           ""----"<<endl;

    _sleep(1000);
    
    fn = valor1 * valor2;
    cout<<"         "<<fn<<endl;



    }
    
}

int opc11()
{
    int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;

}

int opc12()
{
    int digito[20];
    int decimal, residuo, resultado, n=0;

    cout << "Introduce numero: ";
    cin >> decimal;
    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digito[n] = residuo;
        decimal = resultado;
        n++;
    }while (resultado >15);
    {
        digito[n] = resultado;
        cout << "Hexadecimal: ";

        for (int i=n; i>=0; i--)
        {
            if (digito[i]==10)
            {
                cout << "A";
            }
            else if (digito[i]==11)
            {
                cout << "B";
            }
            else if (digito[i]==12)
            {
                cout << "C";
            }
            else if (digito[i]==13)
            {
                cout << "D";
            }
            else if (digito[i]==14)
            {
                cout << "E";
            }
            else if (digito[i]==15)
            {
                cout << "F";
            }
            else
            {
                cout << digito[i];
            }
        }
    }
    
}

int opc13()
{
    int opn;
    cout<<"--INGRESE LA FIGURA QUE DESEA VER--"<<endl;
    cout<<"1. TRIANGULO"<<endl;
    cout<<"2. CUADRADO"<<endl;
    cout<<"3. CIRCULO"<<endl;
    cin>>opn;
   
    switch(opn)
    {
        case 1:
            cout<<"    *"<<endl;
            cout<<"   ***"<<endl;
            cout<<"  *****"<<endl;
            cout<<" *******"<<endl;
            cout<<"*********"<<endl;
        break;

        case 2:
        cout<<"  *****"<<endl;
        cout<<"  *****"<<endl;
        cout<<"  *****"<<endl;
        break;

        case 3:
        cout<<"   *   "<<endl;
        cout<<" *   *  "<<endl;
        cout<<"*     *"<<endl;
        cout<<" *   *"<<endl;
        cout<<"   *"<<endl;
        break;
    }
}

int opc14()
{
    cout<<"Para poder mover el punto preciona las teclas w, s, a, d"<<endl;
						cout<<"Para salir presiona la tecla z"<<endl;
						char opcion;
						int x=20, y=20;
						
						while(opcion!='z')
						{
							gotoxy(x,y); cout<<".";
							opcion=getch();
							switch(opcion){
								system("cls");
								case 'w': y--; break;
								case 's': y++; break;
								case 'a': x--; break;
								case 'd': x++; break;
							}
						}
}


int opc15()
{

						int saldo_inicial = 1000;
						int saldo, reintegro, opcion, agregar;
						
						cout<<"\tBienvenido a su Cajero automatico";
						cout<<"\n1. Ingreso en cuenta";
						cout<<"\n2. Reintegro";
						cout<<"\n3. Ver saldo de cuenta";
						cout<<"\n4. Salir";
						cout<<"\nEscoja una opcion: ";
						cin>>opcion;
						
						if(opcion==1){
							cout<<"\nIngrese la cantidad a depositar: ";
							cin>>agregar;
							saldo = saldo_inicial + agregar;
							cout<<"\nCantidad disponible en cuenta: "<<saldo;
						}
						else if(opcion==2){
							cout<<"\nCuanta cantidad desea retirar: ";
							cin>>reintegro;
							if(reintegro>1000){
								cout<<"\nLa cantidad digitada es mayor a 1000, digite de nuevo la cantidad a retirar"<<endl;
								cin>>reintegro;
							}
							saldo = saldo_inicial - reintegro;
							cout<<"\nCantidad disponible en cuenta: "<<saldo<<endl;
						}
						else if(opcion==3){
							cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial<<endl;
						}
						else if(opcion==4){
							cout<<"Gracias por utilizar nuestro cajero autormatico"<<endl;
						}
						else{
							cout<<"Se equivoco de opcion de menu"<<endl;
						}
						cin.get();
						cout<<""<<endl;
						system("pause");

}

int opc16()
{

    float c1, c2;
						double h;
						
						cout<<"Ingrese cateto 1: ";
						cin>>c1;
						cout<<"Ingrese cateto 2: ";
						cin>>c2;
						h=sqrt(c1*c1+c2*c2);
						cout<<"La hipotenusa mide: "<<h;
						getch();
						cout<<""<<endl;
						system("pause");
}

int opc17()
{
    int peso;
	int opcion;
	int kg, hecto, deca, gra, deci, centi, mili;
							cout<<"Ingrese los kilogramos: ";
							cin>>kg;
							cout<<"   Escoja una opcion del menu:"<<endl;
							cout<<"  1. Hectogramos"<<endl;
							cout<<"  2. Decagramos"<<endl;
							cout<<"  3. Gramos"<<endl;     
							cout<<"  4. Decigramos"<<endl; 
							cout<<"  5. Centigramos"<<endl;
							cout<<"  6. Miligramos"<<endl; 
					
						
							cout<<"Escriba una opcion: ";
							cin>>opcion;
						switch(opcion){
							case 1:
								hecto = 10;
								kg = kg * hecto;
								cout<<"\nLa conversion en hectogramos es: "<<kg<<endl;
								system("pause");
							break;
							case 2:
								deca = 100;
								kg = kg * deca;
								cout<<"\nLa conversion en decagramos es: "<<kg<<endl;
								system("pause");
							break;
							case 3:
								gra = 1000;
								kg = kg * gra;
								cout<<"\nLa conversion en gramos es: "<<kg<<endl;
								system("pause");
							break;
							case 4:
								deci = 10000;
								kg = kg * deci;
								cout<<"\nLa conversion en decigramos es: "<<kg<<endl;
								system("pause");
							break;
							case 5:
								centi = 100000;
								kg = kg * centi;
								cout<<"\nLa conversion en centigramos es: "<<kg<<endl;
								system("pause");
							break;
							case 6:
								mili = 1000000;
								kg = kg * mili;
								cout<<"\nLa conversion en miligramos es: "<<kg<<endl;
								system("pause");
							break;
							getch();
						}
}

int opc18(){

         float x,y,s,d,p,c,sr,rq,res,ros,cb,ch,co,cop,se,sep,ta,tap,cub,cubp,in,inp,lo,lop,ln,lnp;

         int opc;

         printf("Bienvenido a la calculadora de 25 funciones.\n\n");

         do{

             printf("Por favor, introduzca un numero (0 para salir): ");

             scanf("%f",&x);

             printf("\nAhora, inserte otro: ");

             scanf("%f",&y);

             printf("\n\nBien. Ya puede seleccionar una opcion:\n\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Indicar el mayor\n6.Raiz cuadrada del primer numero\n7.Raiz cuadrada del segundo numero\n8.Cuadrado del primer numero\n9.Cuadrado del segundo numero\n10.Raiz cubica del primer numero\n11.Raiz cubica del segundo numero\n12.Coseno del primer numero\n13.Coseno del segundo numero\n14.Seno del primer numero\n15.Seno del segundo numero\n16.Tangente del primer numero\n");

                   printf("17.Tangente del segundo numero\n18.Cubo del primer numero\n19.Cubo del segundo numero\n20.Inversa del primer numero\n21.Inversa del segundo numero\n22.Logaritmo decimal del primer numero\n23.Logaritmo decimal del segundo numero\n24.Logaritmo neperiano del primer numero\n25.Logaritmo neperiano del segundo numero\n0.Salir\n\nUsted ha marcado: ");

                   scanf("%d",&opc);

                   if(opc==1){

                            s=x+y;

                            printf("La suma de ambos numeros es %f\n\n",s);

                   }else if(opc==2){

                            d=x-y;

                            printf("La diferencia de ambos numeros es %f\n\n",d);

                   }else if(opc==3){

                            p=x*y;

                            printf("El producto de ambos numeros es %f\n\n",p);

                   }else if(opc==4){

                            c=x/y;

                            printf("El cociente de la razon de ambos numeros es %f\n\n",c);

                   }else if(opc==5){

                            if(x>y){

                                      printf("El mayor es %f\n\n",x);

                            }else if(y>x){

                                      printf("El mayor es %f\n\n",y);

                            }else{

                                      printf("Disculpe, estos dos numeros son iguales.\n\n");

                            }

                   }else if(opc==6){

                            rq=sqrt(x);

                            printf("La raiz cuadrada del primer numero es %f\n\n",rq);

                   }else if(opc==7){

                            sr=sqrt(y);

                            printf("La raiz cuadrada del segundo numero es %f\n\n",sr);

                   }else if(opc==8){

                            res=x*x;

                            printf("El cuadrado del primer numero es %f\n\n",res);

                   }else if(opc==9){

                            ros=y*y;

                            printf("El cuadrado del segundo numero es %f\n\n",ros);

                   }else if(opc==10){

                            cb=cbrt(x);

                            printf("La raiz cubica del primer numero es %f\n\n",cb);

                   }else if(opc==11){

                            ch=cbrt(y);

                            printf("La raiz cubica del segundo numero es %f\n\n",ch);

                   }else if(opc==12){

                            co=cos(x);

                            printf("El coseno del primer numero es %f\n\n",co);

                   }else if(opc==13){

                            cop=cos(y);

                            printf("El coseno del segundo numero es %f\n\n",cop);

                   }else if(opc==14){

                            se=sin(x);

                            printf("El seno del primer numero es %f\n\n",se);

                   }else if(opc==15){

                            sep=sin(y);

                            printf("El seno del segundo numero es %f\n\n",sep);

                   }else if(opc==16){

                            ta=tan(x);

                            printf("La tangente del primer numero es %f\n\n",ta);

                   }else if(opc==17){

                            tap=tan(y);

                            printf("La tangente del segundo numero es %f\n\n",tap);

                   }else if(opc==18){

                            cub=x*x*x;

                            printf("El cubo del primer numero es %f\n\n",cub);

                   }else if(opc==19){

                            cubp=y*y*y;

                            printf("El cubo del segundo numero es %f\n\n",cubp);

                   }else if(opc==20){

                            in=1/x;

                            printf("La inversa del primer numero es %f\n\n",in);

                   }else if(opc==21){

                            inp=1/y;

                            printf("La inversa del segundo numero es %f\n\n",inp);

                   }else if(opc==22){

                            lo=log10(x);

                            printf("El logaritmo decimal del primer numero es %f\n\n",lo);

                   }else if(opc==23){

                            lop=log10(y);

                            printf("El logaritmo decimal del segundo numero es %f\n\n",lop);

                   }else if(opc==24){

                            ln=log(x);

                            printf("El logaritmo neperiano del primer numero es %f\n\n",ln);

                   }else if(opc==25){

                            lnp=log(y);

                            printf("El logaritmo neperiano del segundo numero es %f\n\n",lnp);

                   }else if(opc==0){

                            printf("Gracias por utilizar este programa.\n\n");

             }else{

                            printf("Disculpe, se ha equivocado al marcar.\n\n");

             }

         }while(x!=0);

}

int opc19(){

         int m;

         printf("Hola, le diremos el mes segun el numero introducido.\n\n");

         printf("Introduzca el numero: ");

        printf("\n");

         scanf("%d",&m);

         if(m==1){

                   printf("Este numero se corresponde con el mes de Enero.\n\n");

         }else if(m==2){

                   printf("Este numero se corresponde con el mes de Febrero.\n\n");

         }else if(m==3){

                   printf("Este numero se corresponde con el mes de Marzo.\n\n");

         }else if(m==4){

                   printf("Este numero se corresponde con el mes de Abril.\n\n");

         }else if(m==5){

                   printf("Este numero se corresponde con el mes de Mayo.\n\n");

         }else if(m==6){

                   printf("Este numero se corresponde con el mes de Junio.\n\n");

         }else if(m==7){

                   printf("Este numero se corresponde con el mes de Julio.\n\n");

         }else if(m==8){

                   printf("Este numero se corresponde con el mes de Agosto.\n\n");

         }else if(m==9){

                   printf("Este numero se corresponde con el mes de Septiembre.\n\n");

         }else if(m==10){

                   printf("Este numero se corresponde con el mes de Octubre.\n\n");

         }else if(m==11){

                   printf("Este numero se corresponde con el mes de Noviembre.\n\n");

         }else if(m==12){

                   printf("Este numero se corresponde con el mes de Diciembre.\n\n");

         }else{

                   printf("Error, mes inexistente.\n\n");

         }

}

int opc20 () 
{
int n, num;
int mayor,menor,sum, media = 0;

cout<<"Ingrese la cantidad de numeros que va a registrar"<<endl;
cin>> n;

for (int i = 1; i <= n; i++)
{
cout<<"Ingrese un numero: "; cin>>num;
if(i == 1)
{ mayor = menor = num;}
if (num > mayor)
{ mayor = num; }
if (num < menor)
{ menor = num; }
sum += num;
}

media = sum / n;
cout<<"El numero mayor es: "<<mayor<<endl;
cout<<"El numero menor es: "<<menor<<endl;
cout<<"La media total es: "<<media<<endl;

return 0;
}


