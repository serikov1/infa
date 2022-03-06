#include "iostream"

class Material
{
public:
    // Принимает на вход величину деформации.
    // Возвращает величину напряжения, посчитанную с учётом реологии материала.
    virtual float getStress(float strain) = 0;
};

class ElasticMaterial: public Material{
public:
    ElasticMaterial(float elasticModulus): elasticModulus(elasticModulus){}
    float getStress(float strain){
        return strain * elasticModulus;
    }
private:
    float elasticModulus;
};

class PlasticMaterial: public Material{
public:
    PlasticMaterial(float elasticModulus, float strainLimit): elasticModulus(elasticModulus), strainLimit(strainLimit){}
    float getStress(float strain){
        if(strain <= strainLimit) return strain * elasticModulus;
        else return strainLimit * elasticModulus;
    }
private:
    float elasticModulus;
    float strainLimit;
};

int main(){
    Material* m;
    m = new ElasticMaterial(100);
    std::cout << "Material stress is: " << m->getStress(0.1) << std::endl;
    delete m;
    m = new PlasticMaterial(100, 0.01);
    std::cout << "Material stress is: " << m->getStress(0.1) << std::endl;
    delete m;
}