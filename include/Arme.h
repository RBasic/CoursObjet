#ifndef ARME_H
#define ARME_H

#include <string>

using namespace std;

class Arme
{
    private:
        int degats;
        int portee;
        string type;
        int niveauRequis;
        float prix;

    public:
        Arme();
        Arme(int,int,string,int,float);
        virtual ~Arme();

        int getDegats();
        int getPortee();
        string getType();
        int getNiveauRequis();
        float getPrix();

        void setDegats(int);
        void setPortee(int);
        void setType(string);
        void setNiveauRequis(int);
        void setPrix(float);

};

#endif // ARME_H
