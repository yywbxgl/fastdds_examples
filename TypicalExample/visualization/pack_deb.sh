# !/bin/bash
set -e

# ----todo  define pack. 
PACK_NAME=acc-visual  
PACK_ARCH=amd64      
PACK_VERSION=1.0.0   

# creat temp dir
rm ./temp_pack -rf
rm ./install -rf
mkdir  ./temp_pack
mkdir  ./temp_pack/DEBIAN

# create control file
echo "Package: ${PACK_NAME}
Version: ${PACK_VERSION}
Maintainer: ql.sun <ql.sun@joyson.cn>
Architecture: ${PACK_ARCH}
Description: sun test" >  ./temp_pack/DEBIAN/control

# ----todo  build projcet
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=../install
make -j4  &&  make install 
cd -

# ----todo  copy install file
cp ./install/*   ./temp_pack/ -r

# pack deb
dpkg --build  ./temp_pack/  ${PACK_NAME}_${PACK_VERSION}-1_${PACK_ARCH}.deb
rm ./temp_pack -rf