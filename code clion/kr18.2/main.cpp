#include <iostream>
struct vect {
    int x;
    int y;
    int z;
};
struct vect sum(struct vect a, struct vect b)
{
    vect cc;
        cc.x=a.x+b.x;
        cc.y=a.y+b.y;
        cc.z=a.z+b.z;
    return (cc);
}
int main() {

}


