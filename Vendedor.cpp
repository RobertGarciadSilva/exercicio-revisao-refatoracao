#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
	int totalMesesAno = 12;
	double quotaMensalVendas;

	double calculaQuotaTotalAnual(){
		return this->quotaMensalVendas * this->totalMesesAno;
	}
  
  public:

	Vendedor(std::string nome, double salHora, double quotaMensalVendas){
		this->setNome(nome);
		this->setSalarioHora(salHora);
		this->setQuotaMensalVendas(quotaMensalVendas);
	}
    
	void setQuotaMensalVendas(double quotaMensalVendas){
      this->quotaMensalVendas = quotaMensalVendas;
    }

	double getQuotaTotalAnual(){
		return calculaQuotaTotalAnual();
	}

	void ImprimeInformacoesBasicas(double horasTrabalhadasNoMes){
      std::cout << "Nome: " << this->getNome() << std::endl;
      std::cout << "Salario Mes: " << this->getSalarioMensal(horasTrabalhadasNoMes) << std::endl;
      std::cout << "Quota vendas: " << this->getQuotaTotalAnual() << std::endl;
      std::cout << std::endl; 
    }
	
	
};

