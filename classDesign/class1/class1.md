
- "-" es un metodo privado 
+ "+" metodo público 

clase() 
es un constructor 

Clock::Clock(){}; 

Lo que viene despues de los dos puntos es un miembro que viene de lo que viene antes de los dos puntos

this-> siempre q hagas referencia a un atributo, si no lo tiene por convencion es una variable local 

Un constructor inicializa variables, se llama cada vez q se crea un objeto, es para q las variables q usan no tengan "basura" 

Clock::Clock(int hr, int min, int sec){
    this -> hr = hr; 
    this -> min = min; 
    this -> sec = sec; 
}; 

el this es para mandarlo directo a la clase 

para compilar 
HAY QUE CHECAR QUE ESTE EN LA CARPETA CORRECTA 

g++ *cpp -o salida.exe
y solo corres el ./salida.exe

para usar 
var++ 

    this->hr = ++this->hr%24; explicar
    es porq si lo hicieras al reves, primero sacaria el residual y luego le agregaria el ++ 


commits desde la terminal 

git status
git add . <- todas mis files con cambios
git add filename.cpp <- file especifica
git commit -m 
git push 

create folder desde terminal
mkdir foldername

create file desde la terminal
touch filename