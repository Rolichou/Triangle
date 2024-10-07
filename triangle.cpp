#include<iostream>
int main(int argc, char**argv){
	float a,b,c;
	float perim,surf;
    int x ;
	do{
	std::cout<<"Entrer dans l'ordre les longueurs strictement positives de la base puis celle de la hauteur et celle du dernier cote du triangle"<<std::endl;
	std::cin>>a>>b>>c;
	if (a<0||b<0||c<0){
		std::cout<<"tous les nombres doivent etre positif"<<std::endl;
	}else{
		perim=a+b+c;
		surf=(a*b)/2;
		std::cout<<"le perimetre est de:"<<perim<<". Et la surface est de:"<<surf<<std::endl;
	}
    std :: cin >>x;
	}while(x!=0);
	return 0;
}


