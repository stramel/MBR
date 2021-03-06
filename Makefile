#############################################################################
# Makefile for building: MBR
# Generated by qmake (2.01a) (Qt 4.8.0) on: Wed Dec 21 16:18:11 2011
# Project:  MBR2.pro
# Template: app
# Command: c:/qt-static_new/qmake/qmake.exe -spec ../../../../Qt-Static_New/mkspecs/win32-g++ CONFIG+=static -o Makefile MBR2.pro
#############################################################################

first: release
install: release-install
uninstall: release-uninstall
MAKEFILE      = Makefile
QMAKE         = c:/qt-static_new/qmake/qmake.exe
DEL_FILE      = rm
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp
COPY_FILE     = $(COPY)
COPY_DIR      = cp -r
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = mv
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		release \
		debug

release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: MBR2.pro  ../../../../Qt-Static_New/mkspecs/win32-g++/qmake.conf ../../../../Qt-Static_New/mkspecs/qconfig.pri \
		../../../../Qt-Static_New/mkspecs/features/qt_functions.prf \
		../../../../Qt-Static_New/mkspecs/features/qt_config.prf \
		../../../../Qt-Static_New/mkspecs/features/exclusive_builds.prf \
		../../../../Qt-Static_New/mkspecs/features/default_pre.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/default_pre.prf \
		../../../../Qt-Static_New/mkspecs/features/release.prf \
		../../../../Qt-Static_New/mkspecs/features/debug_and_release.prf \
		../../../../Qt-Static_New/mkspecs/features/default_post.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/default_post.prf \
		../../../../Qt-Static_New/mkspecs/features/staticlib.prf \
		../../../../Qt-Static_New/mkspecs/features/static.prf \
		../../../../Qt-Static_New/mkspecs/features/qtestlib.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/console.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/rtti.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/exceptions_off.prf \
		../../../../Qt-Static_New/mkspecs/features/warn_on.prf \
		../../../../Qt-Static_New/mkspecs/features/qt.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/thread.prf \
		../../../../Qt-Static_New/mkspecs/features/moc.prf \
		../../../../Qt-Static_New/mkspecs/features/win32/stl_off.prf \
		../../../../Qt-Static_New/mkspecs/features/resources.prf \
		../../../../Qt-Static_New/mkspecs/features/uic.prf \
		../../../../Qt-Static_New/mkspecs/features/yacc.prf \
		../../../../Qt-Static_New/mkspecs/features/lex.prf \
		../../../../Qt-Static_New/mkspecs/features/include_source_dir.prf \
		c:/Qt-Static_New/lib/QtTest.prl \
		c:/Qt-Static_New/lib/QtGui.prl \
		c:/Qt-Static_New/lib/QtCore.prl
	$(QMAKE) -spec ../../../../Qt-Static_New/mkspecs/win32-g++ CONFIG+=static -o Makefile MBR2.pro
../../../../Qt-Static_New/mkspecs/qconfig.pri:
../../../../Qt-Static_New/mkspecs/features/qt_functions.prf:
../../../../Qt-Static_New/mkspecs/features/qt_config.prf:
../../../../Qt-Static_New/mkspecs/features/exclusive_builds.prf:
../../../../Qt-Static_New/mkspecs/features/default_pre.prf:
../../../../Qt-Static_New/mkspecs/features/win32/default_pre.prf:
../../../../Qt-Static_New/mkspecs/features/release.prf:
../../../../Qt-Static_New/mkspecs/features/debug_and_release.prf:
../../../../Qt-Static_New/mkspecs/features/default_post.prf:
../../../../Qt-Static_New/mkspecs/features/win32/default_post.prf:
../../../../Qt-Static_New/mkspecs/features/staticlib.prf:
../../../../Qt-Static_New/mkspecs/features/static.prf:
../../../../Qt-Static_New/mkspecs/features/qtestlib.prf:
../../../../Qt-Static_New/mkspecs/features/win32/console.prf:
../../../../Qt-Static_New/mkspecs/features/win32/rtti.prf:
../../../../Qt-Static_New/mkspecs/features/win32/exceptions_off.prf:
../../../../Qt-Static_New/mkspecs/features/warn_on.prf:
../../../../Qt-Static_New/mkspecs/features/qt.prf:
../../../../Qt-Static_New/mkspecs/features/win32/thread.prf:
../../../../Qt-Static_New/mkspecs/features/moc.prf:
../../../../Qt-Static_New/mkspecs/features/win32/stl_off.prf:
../../../../Qt-Static_New/mkspecs/features/resources.prf:
../../../../Qt-Static_New/mkspecs/features/uic.prf:
../../../../Qt-Static_New/mkspecs/features/yacc.prf:
../../../../Qt-Static_New/mkspecs/features/lex.prf:
../../../../Qt-Static_New/mkspecs/features/include_source_dir.prf:
c:\Qt-Static_New\lib\QtTest.prl:
c:\Qt-Static_New\lib\QtGui.prl:
c:\Qt-Static_New\lib\QtCore.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -spec ../../../../Qt-Static_New/mkspecs/win32-g++ CONFIG+=static -o Makefile MBR2.pro

qmake_all: FORCE

make_default: release-make_default debug-make_default FORCE
make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

check: first

release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
