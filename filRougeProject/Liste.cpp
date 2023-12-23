#include <iostream>
#include "Liste.hpp"


int Liste::compteur = 0;

Liste::Liste() : cercles(new Cercle[MAX_ELEMENT]), rectangles(new Rectangle[MAX_ELEMENT]) {}

int Liste::getCompteur() {
    return compteur;
}

void Liste::incrementNbCercle() {
    nb_c++;
}

void Liste::incrementNbRectangle() {
    nb_r++;
}

void Liste::addCercle(Cercle & cercle) {
    if(nb_c < MAX_ELEMENT - 1) {
        cercles[nb_c] = cercle;
        cercles[nb_c].setOrder(getCompteur());
        compteur++;
        incrementNbCercle();
    } 
}

void Liste::addRectangle(Rectangle & rectangle) {
    if(nb_r < MAX_ELEMENT - 1) {
        rectangles[nb_r] = rectangle;
        rectangles[nb_r].setOrder(getCompteur());
        compteur++;
        incrementNbRectangle();
    }
}

std::string Liste::toString() const {
    std::string ss;
    int i = 0;
    int j = 0;
    while( i < nb_c && j < nb_r) {
        if(cercles[i].getOrder() < rectangles[j].getOrder()) {
            ss += "CERCLE ";
            i++;
        }else {
            ss += "RECTANGLE ";
            j++;
        }
    }

    while(i < nb_c) {
        ss += "CERCLE ";
        i++;
    }

    while(j < nb_r) {
        ss += "RECTANGLE ";
        j++;
    }
    
    return ss;
}