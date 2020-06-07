# SYNOPSIS

This is an example project to create documentation using the Doxygen.

## Dependencies

The following softwares are required to generate the documentation using the Doxygen.

For more information on Doxygen, please visit https://www.doxygen.nl/index.html

```
sudo apt-get install flex
sudo apt-get install bison
sudo apt-get install graphviz # Required to generate the class diagrams
sudo apt install texlive-latex-base # To convert LaTex to PDF
sudo apt-get install texlive-latex-recommended texlive-fonts-recommended texlive-latex-extra # Fonts for LaTex -> pdf conversion
```

## Installing Doxygen

Follow the instructions given in the official web page. https://www.doxygen.nl/download.html

```
git clone https://github.com/doxygen/doxygen.git
cd doxygen
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
sudo make install # Installs the software system wide
```

## Execution

The doxygen command requires a lot of flags as input to generate the documentation. All these settings could be written into a file and fed to the **doxygen** command.  

Execute,  

> doxygen Doxyfile

This generates a folder Doc, with html and latex subfolders in it.  

To generate a PDF go to Doc/latex and execute the make command

```
cd Doc/latex
make
```

The **refman.pdf** is the entire documentation in a pdf format.