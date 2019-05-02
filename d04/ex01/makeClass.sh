#!/bin/bash

function do_header
{
    if [ -e "$header_path" ]; then
        read -p "'$header_path' already exists. Overwrite? (y/n) ";

        if [ $REPLY != y ]; then
            return 0;
        fi
    fi

    # --- QnD: Header File ---
    echo "#ifndef $header_guard" > $header_path;
    echo "# define $header_guard" >> $header_path;
    echo >> $header_path;

    if [ x$namespace != x ]; then
        indent="	";
        echo "namespace $namespace" >> $header_path;
        echo "{" >> $header_path;
    fi

    echo "${indent}class $name {" >> $header_path;
    echo >> $header_path;
    echo "${indent}	public:" >> $header_path;
    echo >> $header_path;
    echo "${indent}		${name}(void);" >> $header_path;
    echo "${indent}		${name}(${name} const & src);" >> $header_path;
    echo "${indent}		virtual	~${name}(void);" >> $header_path;
    echo >> $header_path;
    echo "${indent}		${name} &	operator=(${name} const &tmp);"\
	    >> $header_path;
    echo "${indent}};" >> $header_path;

    if [ x$namespace != x ]; then
        echo "}" >> $header_path;
    fi

    echo >> $header_path;
    echo "#endif // ${header_guard}" >> $header_path;
}

function do_source
{
    if [ -e "$source_path" ]; then
        read -p "'$source_path' already exists. Overwrite? (y/n) ";

        if [ $REPLY != y ]; then
            return 0;
        fi
    fi

    # QnD --- Source File ---
    echo "#include \"${header_file}\"" > $source_path;
    echo >> $source_path;

    if [ x$namespace != x ]; then
        indent="	";
        echo "namespace $namespace" >> $source_path;
        echo "{" >> $source_path;
    fi

    echo "${indent}${name}::${name}(void) {" >> $source_path;
    echo "${indent}	return ;" >> $source_path;
    echo "${indent}}" >> $source_path;
    echo >> $source_path;
    echo "${indent}${name}::${name}(${name} const & src) {" >> $source_path;
    echo "${indent}	*this = src;" >> $source_path;
    echo "${indent}	return ;" >> $source_path;
    echo "${indent}}" >> $source_path;
    echo >> $source_path;
    echo "${indent}${name}::~${name}(void) {" >> $source_path;
    echo "${indent}	return ;" >> $source_path;
    echo "${indent}}" >> $source_path;
    echo >> $source_path;
    echo "${indent}${name} &	${name}::operator=(${name} const & tmp) {"\
	    >> $source_path;
    echo "${indent}	if (this == &tmp)" >> $source_path;
    echo "${indent}		return *this;" >> $source_path;
    echo "${indent}	return *this;" >> $source_path;
    echo "${indent}}" >> $source_path;

    if [ x$namespace != x ]; then
        echo "}" >> $source_path;
    fi
}

if [ x$1 = x ]; then
    echo "Usage: $0 NAME [NAMESPACE]";
    echo;
    echo "Where NAME is the name of the file/class and NAMESPACE is the namespace.";

    exit -1;
fi

name="`echo "$1"`";
namespace="`echo "$2"`";
header_guard="`echo "$name" | tr [:lower:] [:upper:]`_CLASS_HPP";
header_file="${name}.class.hpp";

if [ -d include ]; then
    incdir=include/;
fi

header_path="${incdir}${header_file}";

do_header;

source_file="${name}.class.cpp";

if [ -d src ]; then
    srcdir=src/;
fi

source_path="${srcdir}${source_file}";

do_source;
