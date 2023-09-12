classdef Intersection
    %Stores intersections

    properties
        x = -1
        y = -1
        angles = -1 * ones(1, 4)
        visited = -1 * ones(1, 4)
    end

    methods
        function obj = Intersection()
        end

        function obj = setPos(obj, x, y)
            obj.x = x;
            obj.y = y;
        end

        function addIntersection(obj, angle)
            for i = 1:4
                if (obj.visited(i) == -1)
                    obj.angles(i) = angle;
                    obj.visited(i) = 0;
                    return;
                end
            end
        end

        function r = hasUnvisitedIntersections(obj)
            r = all(obj.visited ~= 0);
        end

        function r = isIntersection(obj)
            r = ((obj.x ~= -1) & (obj.y ~= -1));
        end
    end
end