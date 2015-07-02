
>src/src/coverage.txt

rm -rf *.out

file_name=$1

echo $file_name
#file_name=$(echo $1 | sed 's/.*\///')


base=$file_name

file_name=$(echo $file_name|sed 's/\(.*\)\.c/\1/')

if [ "$2" != "main" ];
then
str=$2
else
str=main1
fi

bin/cilly  --noPrintLn --doParam --dohandleAssert --dotestgenStub --param_file=$file_name --dohandleCalls --doinsertTestDriver --dohandleExp --domodifyVars --doloopUnroll --domakeCDG --doloopUnrollOthers --doextractStruct --dosidTable --dolevel_struct --dovartype --dovarUpdated --dohelperpathsym --dopathSymbol --doinsertReturnHolders --doinstMapConcolic --doentryExit --dofixMainForGlobals -g -lm --save-temps --merge src/src/utils.c src/src/sidTable.c src/src/directAndSolve.c src/src/symbolicExec.c src/src/queue.c src/src/levelTree.c src/src/stringTokenize.c src/src/arrayAndPointersSymbolicExec.c src/src/updateIntegerValues.c src/src/flatds.c src/src/cdg.c src/src/cdgWrapper.c  src/src/stack.c src/src/ipaRecursive.c $base -g -o $file_name.out

echo $file_name

rm -rf *.tc
./$file_name.out






