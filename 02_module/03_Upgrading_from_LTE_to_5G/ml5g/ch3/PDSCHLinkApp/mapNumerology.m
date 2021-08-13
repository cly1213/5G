function [mappedPRB,mappedSymbols] = mapNumerology(subcarriers,symbols,fs,ft)

    mappedPRB = unique(fix(subcarriers*fs/(ft*12)),'stable');

    if (ft < fs)
        % If ft/fs < 1, reduction
        mappedSymbols = unique(fix(symbols*ft/fs),'stable');
    else
        % Else, repetition by ft/fs
        mappedSymbols = reshape((0:(ft/fs-1))' + symbols(:)'*ft/fs,1,[]);
    end

end
