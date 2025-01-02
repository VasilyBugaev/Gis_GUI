//
// Created by bugae on 19.08.2022.
//

#ifndef GIS_GUI_MAPACTIONS_H
#define GIS_GUI_MAPACTIONS_H
#include <QAction>
#include <QToolBar>
#include "CustomControlButton.h"

namespace gisUI {

    struct MapActions {
        QAction *pointsColor;
        QAction *zoomInAction;
        QAction *zoomOutAction;
        QAction *panAction;
        QAction *fullExtentAction;
        QAction *zoomToTrajAction;

        MapActions();
        ~MapActions();
        MapActions(const MapActions *widget) = delete;
        MapActions &operator=(const MapActions *widget) = delete;

    };

    struct ModelingButtons{
        CustomControlButton* playBtn = nullptr;
        CustomControlButton* pauseBtn = nullptr;
        CustomControlButton* stopBtn = nullptr;

        ModelingButtons(QToolBar* toolBar = nullptr);
    };
}

#endif //GIS_GUI_MAPACTIONS_H
