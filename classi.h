#ifndef CLASSI_H
#define CLASSI_H

#include <iostream>
#include <stdio.h>

using namespace std;

class Studenti{
	string nome, cognome, city;
	int matricola;
	double media;

public:
	Studenti(string NOME, string COGNOME, string CITY, double MEDIA, int MATRICOLA){
		 setNome(NOME);
		 setCognome(COGNOME);
		 setCity(CITY) ;
		 setMatricola(MATRICOLA);
		 setMedia(MEDIA);
	}

//setter

	void setNome(const string NOME) {nome = NOME;}
	void setCognome(const string COGNOME) {cognome = COGNOME;}
	void setCity(const string CITY) {city = CITY;}
	void setMatricola(const int MATRICOLA) {matricola = MATRICOLA;}
	void setMedia(const double MEDIA) {media = MEDIA;}

//GETTER

	string getNome() {return nome;}
	string getCognome() {return cognome;}
	string getCity() {return city;}
	int getMatricola() {return matricola;}
	double getMedia() {return media;}

};

//LISTA

class NodeDL{

private:

	NodeDL* next;
	NodeDL* prev;
	Studenti valore;

public:

	NodeDL(Studenti valore, NodeDL *prev, NodeDL *next) : valore(valore), prev(prev), next(next) {}
	NodeDL(Studenti valore) : NodeDL(valore, NULL, NULL) {}
	NodeDL() : NodeDL(0, NULL, NULL){}

	void setValue(Studenti valore) {this->valore = valore;}
	void setPrev(NodeDL *prev) {this->prev = prev;}
	void setNext(NodeDL *next) {this->next = next;}

	int getValue() const {return valore;}

};

// prova con atom
