set(wxFormBuilder_sources
	wxFormBuilder/MainFrameBase.cpp
)

set(sources
	src/helpers.cpp
	${wxFormBuilder_sources}
)

set(exe_sources
	src/main.cpp
	${sources}
)

set(headers
	include/wxdataviewtreectrltest/helpers.hpp
	wxFormBuilder/MainFrameBase.h
)

set(test_sources
	""
)
