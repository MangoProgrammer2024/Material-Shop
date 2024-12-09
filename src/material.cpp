/*
==============
 MATERIAL.CPP
==============
*/
#include "material.h"
//game descriptor for material id *reads the materials id*
int game_descriptorMaterialId = 0;
/*
==============
 MATERIAL TAG
==============
*/
#ifdef MATERIAL_BUFFER
const char * i_Mtl_Tag(Material * mMtl){
   static char mtlBuffer[1024];
    if(mMtl->MtlPtr.MtlLoad(mMtl) == true){
      printf("%c", i_Mtl_Tag);
    };
 return mtlBuffer;
};
#endif
/*
===============
 SAVE MATERIAL
===============
*/
void * saveMtl(const std::string& _NAME, enum * _TYPE);
bool SaveMtl(Material * mtl){
 if(MainWindow::SaveFile.Click()){
    saveMtl(mtl->MtlPtr.MaterialName, MaterialType);
    vfileprintmtl(i_Mtl_Tag, mtl->MtlPtr.MtlFile);
 };
 return mtl->MtlPtr.MtlLoad(mtl);
};
/*
===============
 OPEN MATERIAL
===============
*/
void * openMtl(const std::string& mtlFile, const std::string& format);
bool OpenMtl(Material * mtl){
 if(MainWindow::OpenFile.Click()){
   openMtl(mtl->MaterialName, mtl->extension);
 };
return mtl->MtlPtr.MtlLoad(mtl);
};
/*
========================
 MATERIAL FORMAT FAILED
========================
*/
void MtlFormatNull(Material * mtl){
 if(!mtl->extension != "*.gmtl"){
  ERROR_MSG_BOX_MTLSHOP("Material Format Not Readable\n");
 };
 
};



