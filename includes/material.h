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
    void * printmtlf(const std::string& Name, enum type);
    void MtlFile(Material * mtl, const std::string& extension){
       int i;
       for(i = 0; i >= 0; i++){
          extension == "*.gmtl";
           mtl->MaterialName == ""extension;
       }
       
       return& m;
    };





};


#endif
