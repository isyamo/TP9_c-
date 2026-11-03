#ifndef COMPTABLE_HPP
#define COMPTABLE_HPP

class Comptable {
protected:
    double salaire;

public:
    explicit Comptable(double salaire);
    virtual ~Comptable() = default;

    virtual void afficherSalaire() const;
};

#endif
