#ifndef TECHNICIEN_HPP
#define TECHNICIEN_HPP

class Technicien {
protected:
    double salaire;

public:
    explicit Technicien(double salaire);
    virtual ~Technicien() = default;

    virtual void afficherSalaire() const;
};

#endif
