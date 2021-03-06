
buildProject()
{
  cd wmbus
  ./MAKE clean
  ./MAKE

  return $?
}

buildApuImage()
{
  rm -rf apu
  mkdir -p apu/data/etc/wmbus/diatemplates
  mkdir -p apu/data/bin/
  mkdir -p apu/data/lib/wmbus/preprocessor/
  mkdir -p apu/data/etc/xo/
  mkdir -p apu/data/etc/init.d/
  mkdir -p apu/control
  
  cp wmbus/config/modelconfig.xml apu/data/etc/wmbus/
  cp wmbus/config/spvconfig.xml apu/data/etc/wmbus/
  cp wmbus/config/bdd.xml apu/data/etc/wmbus
  cp wmbus/diatemplates/*.xml apu/data/etc/wmbus/diatemplates/
  cp wmbus/supervisor/wmbus.x apu/data/bin/
  cp wmbus/xoref/wmbus.xns apu/data/etc/wmbus/
  cp wmbus/xoref/*.xor apu/data/etc/wmbus/
  cp wmbus/lib/preprocessor/manufacturer.xml apu/data/etc/wmbus
  cp wmbus/lib/preprocessor/manufacturer_*/*.so apu/data/lib/wmbus/preprocessor/

  cp wmbus/apu/$1/postinst apu/control/postinst
  cp wmbus/wmbus-init apu/data/etc/init.d/wmbus
}

projectGroupId()
{
  echo "com.actility"
}

projectName()
{
  echo "wmbus"
}

projectVersion()
{
  cat wmbus/Version
}

projectApuRev()
{
  cat wmbus/apu/revision
}

projectDescription()
{
  echo "Wireless MBus M2M Driver"
}

projectArchDepend()
{
  # yes, need arch for building wmbus
  return 0
}

