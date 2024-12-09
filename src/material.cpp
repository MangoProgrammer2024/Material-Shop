/*
 MATERIAL.CPP
*/

int game_descriptorMaterialId = 0;

#ifdef MATERIAL_BUFFER
const char * i_Mtl_Tag(Material * mMtl){
   static char mtlBuffer[1024];
    if(mMtl->MtlPtr.LoadMtl(mMtl) == true){

    };
};

#endif
