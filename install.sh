sudo mkdir /usr/share/boiler/
sudo mkdir /usr/share/boiler/template/
sudo cp boilerplates/* /usr/share/boiler/template/
g++ -o boiler src/generate.cpp src/main.cpp
sudo cp boiler /usr/bin/
rm boiler