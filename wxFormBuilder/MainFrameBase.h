///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

namespace WxDataViewTreeCtrlTest
{
	namespace WxFormBuilder
	{
		///////////////////////////////////////////////////////////////////////////////
		/// Class MainFrameBase
		///////////////////////////////////////////////////////////////////////////////
		class MainFrameBase : public wxFrame
		{
			private:

			protected:
				wxMenuBar* m_menubar1;
				wxMenu* m_menu1;
				wxDataViewTreeCtrl* theTestCase;
				wxStatusBar* m_statusBar1;

			public:

				MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("wxDataViewCtrl Test"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

				~MainFrameBase();

		};

	} // namespace WxFormBuilder
} // namespace WxDataViewTreeCtrlTest

