# LJMet-Slimmer

Code (step1.cc/.h) to slim LJMet trees. Built on ROOT's MakeClass.

To test: give input file name in testStep1.C, copy a relevant step1 onto step1.*

Run: root -l testStep1.C


Set up 'source setup.sh' 

to run over LJMet files stored on Fermilab's EOS, for example do: 

python -u runCondorSlimmerJobs.py nominal

Hadd output files with addjobs.py 


