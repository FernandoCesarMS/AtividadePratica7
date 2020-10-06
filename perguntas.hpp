class Base{
    
    int i;
    
    protected:
        int read() const { return i; }
        void set(int ii) { i = ii; }
    
    public:
        Base(int ii = 0) : i(ii) {}
        int value(int m) const { return m*i; }
};


class Derived : protected Base{
        
        int j;
        public:
            Derived(int jj = 0) : j(jj) {}
            void change(int x) { set(x); }
};

class Derived2 : public Derived{
        
    
        public:
            
};

// Pergunta 1
// É possível adicionar uma função membro na classe Derived que chama a função read()?
//     Não pois a herança feita foi somente em relação a parte private da calsse Base 

// Pergunta 2
// Alterando a herança para private, ainda assim é possível adicionar uma função membro na classe Derived que chama a função read()?
//     Nesse caso seria possível usar a função read() pois a herança foi da classe private em que a função está contida.

// Pergunta 3
// É possível chamar a função read() a partir de um objeto do tipo Derived?
//     Sim pois esse objeto irá carregar com ele as propriedades da classe Derivated que nesse caso tem herança da classe Base. 

// Pergunta 4 
// Modifique o código de forma que a classe Derived use herança protected. Crie uma classe Derived2 que seja derivada da classe Derived utilizando herança public. É possível chamar read() a partir de uma função membro da classe Derived2? E o método value()?
