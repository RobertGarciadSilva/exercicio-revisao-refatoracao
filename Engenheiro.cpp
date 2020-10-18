#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  

  private:
	  int NumeroProjetos;

  public:
    
    Engenheiro(std::string nome, double salHora, int numProjetos){
      this->setNome(nome);
      this->setSalarioHora(salHora);
      this->setNumeroProjetos(numProjetos);
    }
    
    void setNumeroProjetos(int numProjetos){
        this->NumeroProjetos = numProjetos;
    }

    int getNumeroProjetos(){
      return this->NumeroProjetos;
    }

    void ImprimeInformacoesBasicas(double horasTrabalhadasNoMes){
      std::cout << "Nome: " << this->getNome() << std::endl;
      std::cout << "Salario Mes: " << this->getSalarioMensal(horasTrabalhadasNoMes) << std::endl;
      std::cout << "Projetos: " << this->getNumeroProjetos() << std::endl;
      std::cout << std::endl; 
    }

    
	
};

