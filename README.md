qtFit is used to do linear regression of data, plot/view the results, archive them into an database.

No warranty or guarrantee of the results is implied.

Installation instructions:

1) Qt:

    - You need 5.x or 4.x.x installed. Download the Qt online installer from http://www.qt.io/download-open-source/ 

2) Minuit

-i) Download latest Minuit2 located at:

  http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/release/download.html

-ii) Unpack and cd

  $ tar -xvf minuit.tar.gz -C ~/
  $ cd ~/minuit

-ii) To install follor the instructions at:

  http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/gettingStarted/autoconf.html

-iii) Make SURE that the tests in the tutorial are running as described in the link below

  http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/gettingStarted/testOutput.html

-iv) - Copy (as superuser) the miniut libraries from minuit/src/.lib/liblcg_Minuit.* to /usr/lib/

  $ sudo cp minuit/src/.lib/liblcg_Minuit.* /usr/lib/

-v) - Update ldconfig

  $ sudo ldconfig


3) qtfit:

-i) cd to the downloaded package

$ cd ~/qtfit

-ii) If Qt binaries are not in your path, set the env (Must locate where qmake is)

$ PATH=/usr/Qt/5.4/gcc_64/bin:$PATH  (change "/usr/Qt/5.4/gcc_64/bin" as per your system)

$ export

-iii) Run qmake and make install (as root)

$ qmake
$ make
$ sudo make install

-v) cd to directory fct/ and compile all the libraries using the script compile

$ cd fct
$ sudo ./compile

-vi) To test the gui, invoke

$ qtfit

or

$./qtfit if not installed as root.

-vii) Read the manual (etc/doc/manual.pdf) and try examples 1 and 2.
