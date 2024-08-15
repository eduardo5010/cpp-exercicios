#ifndef PONTO_H
#define PONTO_H
class Ponto {
		int x;  
		int y;
   public:
		Ponto( int = 0, int = 0 ); 
		~Ponto(); 
	      void alteraX( int );    
		int retornaX() const; 
		void alteraY( int ); 
		int retornaY() const;
         void imprime() const;  
}; 
#endif
