#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string nome;
    double salarioHora;
    double horaTrabalhadaMinima = 8;

    /*Cálculo de hora extra (+50% se horasTrabalhadas > 8)*/
    double calculaSalarioExtra(double horasTrabalhadas){
      if(horasTrabalhadas <= 8){
        return 0;
      }
      double horasExtra = horasTrabalhadas - this->horaTrabalhadaMinima;
      return this->salarioHora * (horasExtra/2);
    }

    double calculaSalarioMensal(double horasTrabalhadas){
      return (salarioHora * horasTrabalhadas) + calculaSalarioExtra(horasTrabalhadas);
    }

  public:

    void setSalarioHora(double salHora){
      this->salarioHora = salHora;
    } 

    

    double getSalarioHora(){
      return this->salarioHora;
    }

    double getSalarioMensal(double horasTrabalhadas){
      return calculaSalarioMensal(horasTrabalhadas);
    }

    void setNome(std::string nome){
      this->nome = nome;
    }

    std::string getNome(){
      return this->nome;
    }
	
};

#endif