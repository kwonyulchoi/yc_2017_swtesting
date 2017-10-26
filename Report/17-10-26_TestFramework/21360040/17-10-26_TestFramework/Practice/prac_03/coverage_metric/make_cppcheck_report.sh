PROJECTNAME=CircularQueue_projcet
INSPECTION_TARGET=libsrc
OUTPUT_NAME=out.xml
OUTPUT_HTML_PATH=_out_html

if [ -e $OUTPUT_HTML_PATH ]; then
echo "output directory already exists"
else
echo "ouput directory does not exist, make it now"
mkdir $OUTPUT_HTML_PATH
fi

echo make xml
./cppcheck --enable=all --xml-version=2 $INSPECTION_TARGET 2>$OUTPUT_NAME
echo http files

./cppcheck-htmlreport --file=./$OUTPUT_NAME  \
                      --report-dir=./$OUTPUT_HTML_PATH \
                      --source-dir=. \
                      --source-encoding="iso8859-1" \
                      --title=$PROJECTNAME
