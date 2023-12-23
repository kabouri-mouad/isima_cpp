class Point {
    private:
        double x;
        double y;
        static int compteur;
    public:
        Point();
        Point(double px, double py);
        void setX(double px);
        void setY(double);
        double getX();
        double getY();
        static void setCompteur(int compteur);
        static int getCompteur();
        void deplacerDe(double px, double py);
        void deplacerVers(double px, double py);
        ~Point();
};
