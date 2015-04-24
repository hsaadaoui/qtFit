**qtFit** is used for linear regression, plotting, and archiving the results. It is developed using Qt and C++. It uses CERN's [Minuit](https://seal.web.cern.ch/seal/MathLibs/Minuit2/html/) routine for performing linear regression and [QCPplot](http://www.qcustomplot.com)  for visualization, and SQLite engine for archiving the results.

## Installation

###I. Qt

         You need 5.x or 4.x.x. Download the Qt installer http://www.qt.io/download-open-source/

###II. Minuit

1.Download latest Minuit2
 
         http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/release/download.html
  
2. Unpack and cd

         $ tar -xvf minuit.tar.gz -C ~/
         $ cd ~/minuit
  
3. To install follor the instructions at:

         http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/gettingStarted/autoconf.html

4. Make SURE that the tests in the tutorial are running as described in the link below
        
         http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/gettingStarted/testOutput.html

5. Copy (as superuser) the miniut libraries from minuit/src/.lib/liblcg_Minuit.* to /usr/lib/

         $ sudo cp minuit/src/.lib/liblcg_Minuit.* /usr/lib/

6. Update ldconfig
       
         $ sudo ldconfig


###III. qtFit:

1. cd to the downloaded package
        
         $ cd ~/qtfit

2. If Qt binaries are not in your path, set the env (Must locate where qmake is)
       
         $ PATH=/usr/Qt/5.4/gcc_64/bin:$PATH  (change "/usr/Qt/5.4/gcc_64/bin" as per your system)
         $ export

3. Run qmake and make install (as root)
        
         $ qmake
         $ make
         $ sudo make install

4. cd to directory fct/ and compile all the libraries using the script compile
       
         $ cd fct
         $ sudo ./compile

5. To start the GUI
       
         $ qtfit
or

         $./qtfit if not installed as root.

6. Read the manual (etc/doc/tutorial.pdf) and try examples 1 and 2.
