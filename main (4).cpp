/******************************************************************************

 Faça uma função que recebe, por parâmetro, a 
altura e o sexo de uma pessoa e retorna o seu peso 
ideal. Para os homens, calcular o peso ideal usando 
a fórmula PI = 72,7 * altura – 58, e para as 
mulheres PI = 62,1 * altura – 44,7. 

*******************************************************************************/
#include <iostream>
using namespace std;


double calcularPeso(double altura, int sexo){
    
    if(sexo==1){
            return 62.1 * altura -44,7;

    }else if(sexo==2){
            return 72.7* altura -58;
            
    }else{
        cout << "inválido"; 
        return 0;
    }
}




int main()
{
    double altura, sexo;
    cout << "digita a altura" << endl;
    cin >> altura;
    cout << "digite o sexo, 1 para mulher e 2 para homem" << endl;
    cin >> sexo;
    
    double calculo = calcularPeso( altura, sexo);
    
    if(calculo !=0){
        printf( "%.2f", calculo);
    }
    
  
    return 0;
}