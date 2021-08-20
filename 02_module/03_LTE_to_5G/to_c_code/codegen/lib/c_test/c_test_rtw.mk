###########################################################################
## Makefile generated for component 'c_test'. 
## 
## Makefile     : c_test_rtw.mk
## Generated on : Tue May 25 16:22:13 2021
## Final product: .\c_test.lib
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = c_test
MAKEFILE                  = c_test_rtw.mk
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2021a
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2021a\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = D:\testing\to_c_code\codegen\lib\c_test
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
COMPILER_COMMAND_FILE     = c_test_rtw_comp.rsp
CMD_FILE                  = c_test_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
MODELLIB                  = c_test.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2015 v14.0 | nmake (64-bit Windows)
# Supported Version(s):    14.0
# ToolchainInfo Version:   2021a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS /wd4251
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)\mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = .\c_test.lib
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=c_test

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\c_test_data.c $(START_DIR)\rt_nonfinite.c $(START_DIR)\rtGetNaN.c $(START_DIR)\rtGetInf.c $(START_DIR)\c_test_initialize.c $(START_DIR)\c_test_terminate.c $(START_DIR)\c_test.c $(START_DIR)\getSCHInfo.c $(START_DIR)\getCBSInfo.c $(START_DIR)\nrCRCEncode.c $(START_DIR)\validatestring.c $(START_DIR)\strcmp.c $(START_DIR)\encode.c $(START_DIR)\any.c $(START_DIR)\calcShiftValues.c $(START_DIR)\mod.c $(START_DIR)\colon.c $(START_DIR)\SystemCore.c $(START_DIR)\nrLDPCDecode.c $(START_DIR)\getParams.c $(START_DIR)\find.c $(START_DIR)\sortLE.c $(START_DIR)\sum.c $(START_DIR)\nrCRCDecode.c $(START_DIR)\BPDecode.c $(START_DIR)\c_test_emxutil.c $(START_DIR)\c_test_emxAPI.c $(START_DIR)\c_test_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = c_test_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj c_test_initialize.obj c_test_terminate.obj c_test.obj getSCHInfo.obj getCBSInfo.obj nrCRCEncode.obj validatestring.obj strcmp.obj encode.obj any.obj calcShiftValues.obj mod.obj colon.obj SystemCore.obj nrLDPCDecode.obj getParams.obj find.obj sortLE.obj sum.obj nrCRCDecode.obj BPDecode.obj c_test_emxutil.obj c_test_emxAPI.obj c_test_rtwutil.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_ = /source-charset:utf-8
CFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CFLAGS = $(CFLAGS) $(CFLAGS_) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ = /source-charset:utf-8
CPPFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_) $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


!include $(MATLAB_ROOT)\rtw\c\tools\vcdefs.mak


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@cmd /C "@echo ### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS) -out:$(PRODUCT) @$(CMD_FILE)
	@cmd /C "@echo ### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{D:\testing\to_c_code}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{D:\testing\to_c_code}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


c_test_data.obj : $(START_DIR)\c_test_data.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test_data.c


rt_nonfinite.obj : $(START_DIR)\rt_nonfinite.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rt_nonfinite.c


rtGetNaN.obj : $(START_DIR)\rtGetNaN.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rtGetNaN.c


rtGetInf.obj : $(START_DIR)\rtGetInf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rtGetInf.c


c_test_initialize.obj : $(START_DIR)\c_test_initialize.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test_initialize.c


c_test_terminate.obj : $(START_DIR)\c_test_terminate.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test_terminate.c


c_test.obj : $(START_DIR)\c_test.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test.c


getSCHInfo.obj : $(START_DIR)\getSCHInfo.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\getSCHInfo.c


getCBSInfo.obj : $(START_DIR)\getCBSInfo.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\getCBSInfo.c


nrCRCEncode.obj : $(START_DIR)\nrCRCEncode.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\nrCRCEncode.c


validatestring.obj : $(START_DIR)\validatestring.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\validatestring.c


strcmp.obj : $(START_DIR)\strcmp.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\strcmp.c


encode.obj : $(START_DIR)\encode.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\encode.c


any.obj : $(START_DIR)\any.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\any.c


calcShiftValues.obj : $(START_DIR)\calcShiftValues.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\calcShiftValues.c


mod.obj : $(START_DIR)\mod.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mod.c


colon.obj : $(START_DIR)\colon.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\colon.c


SystemCore.obj : $(START_DIR)\SystemCore.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\SystemCore.c


nrLDPCDecode.obj : $(START_DIR)\nrLDPCDecode.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\nrLDPCDecode.c


getParams.obj : $(START_DIR)\getParams.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\getParams.c


find.obj : $(START_DIR)\find.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\find.c


sortLE.obj : $(START_DIR)\sortLE.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\sortLE.c


sum.obj : $(START_DIR)\sum.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\sum.c


nrCRCDecode.obj : $(START_DIR)\nrCRCDecode.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\nrCRCDecode.c


BPDecode.obj : $(START_DIR)\BPDecode.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\BPDecode.c


c_test_emxutil.obj : $(START_DIR)\c_test_emxutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test_emxutil.c


c_test_emxAPI.obj : $(START_DIR)\c_test_emxAPI.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test_emxAPI.c


c_test_rtwutil.obj : $(START_DIR)\c_test_rtwutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\c_test_rtwutil.c


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


