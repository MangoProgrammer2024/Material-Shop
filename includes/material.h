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
    Material MtlPtr;
    //material name
    const std::string& MaterialName;
    void mtlPreference(float * _FLOAT);
    void mtlTag(const std::string& _TAG);
    //material dimensions type
    float MtlW;
    float MtlH;
    //material type
    enum{
    MTL_DESC = 0, MTL_TRANSPARENT, MTL_BLEND, MTL_RGB, MTL_TOOL
    }MaterialType;
    //
    //Material Stuff
    void& printmtlf(const std::string& Name, enum type);
    //MtlFile
    void MtlFile(Material * mtl, const std::string& extension){
       int i;
       for(i = 0; i >= 0; i++){
          extension == "*.gmtl";
           mtl->MaterialName == "" extension;
       }
       MtlPtr.printmtlf(mtl->MaterialName,mtl->MTL_DESC);
       return& m;
    };

    //MtlCode 
    void MtlCode(Material * mtl);

    //LoadMtl
    void MtlLoad(Material mtl){
       Material * mtlpref;
       if(mtl.MtlLoad(mtl) == true){
          mtl.mtlPreference(mtlpref->MtlW);//material width
          mtl.mtlPreference(mtlpref->MtlH);//material height
          mtl.mtlTag(mtlpref->MaterialName().begin);//material iterator
       };
       return& m;
    };
    //material info * binary data
    void MtlInfo();

   /*
   
      MATERIAL OTHER PREFERENCES
                  |
                 \|/
   */
   float g_mtlTransparencyAlpha;
   float g_mtl_LibArray[4][4][4];
   float g_mtlRgb[3][3][3];

};


#endif
