/***************************************************************************
 *   Copyright (C) 2004 by Dominik Seichter                                *
 *   domseichter@web.de                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef PREFERENCESDLG_H
#define PREFERENCESDLG_H

#include <kdialogbase.h>

class QRadioButton;
class QLabel;
class QSpinBox;

/**
Preferences dialog for schafkopf

@author Dominik Seichter
*/
class PreferencesDlg : public KDialogBase
{
    Q_OBJECT
    public:
        PreferencesDlg(QWidget *parent = 0, const char *name = 0);
        ~PreferencesDlg();
       
    protected:
        void accept();
        
    private:
        void addPageResults();
        void addPageResultsMoney();
        void addPageResultsPoints();
        
    private:
        QRadioButton* m_radioMoney;
        QRadioButton* m_radioPoints;
	QLabel* m_label1;
	QLabel* m_label2;
	QLabel* m_label3;
	QLabel* m_label4;
	QSpinBox* m_spinCallGame;
	QSpinBox* m_spinSoloGame;
};

#endif