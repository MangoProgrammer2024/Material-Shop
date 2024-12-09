//MTL
#ifndef MTL_H
#define MTL_H

#include <string>

class Material{
public:
   Material();
   ~Material();

    int MaterialId;
    bool MtlLoad(Material m);
    //material name
    const std::string& MaterialName;
    //material dimensions type
    float MtlW;
    float MtlH;
    //material type
    enum{
    MTL_DESC = 0, MTL_TRANSPARENT, MTL_BLEND, MTL_RGB, MTL_TOOL
    }MaterialType;
    //
    //Material Stuff

};


#endif
